#include <iostream>
using namespace std;


int main(){
    
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;


    
    while (t){
        int n;  
        cout << "Enter the number of elements: ";
        cin >> n;
        int pos = 0;
        int reslut;
        while (pos < n)
        {
            int val;
            cout << "Enter the value: ";
            cin >> val;

            if(pos == 0){
                reslut = val;
            }else if (val < reslut){
                reslut = val;
            }

            pos++;
        }
        cout << "The minimum value is: " << reslut << endl;


        --t;
    }

    cout <<"\n"<<"the end of mid part in \n while loop"<<"\n"<<"\n"<<endl;

    return 0;
}