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

    for (int i= 0; i < n; i++){
        if (arr[i] >= arr[i+1] ){
            cout<<"No";
            return 0;
        }else{
            continue;
        }
    }

    cout << "Yes";

    
    return 0;
}