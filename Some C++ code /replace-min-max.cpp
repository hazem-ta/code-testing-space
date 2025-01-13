#include <iostream>
using namespace std;

int main() {

    int n, arr[200];
    cout <<"Enter the array size: ";
    cin >> n;
    cout <<"Enter the numbers: ";

    for (int i= 0; i < n; i++){
        cin >> arr[i];
    }

    int minNum, maxNum;

    for (int i= 0; i < n; i++){
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }        
    }

    for (int i= 0; i < n; i++){
        if (arr[i] == maxNum){
            arr[i] = minNum;
        }else if (arr[i] == minNum){
            arr[i] = maxNum;
        }
    }




    cout<< "\n ";
    for (int i= 0; i < n; i++){
        cout<< arr[i] <<" ";
    }


    
    


    return 0;
}