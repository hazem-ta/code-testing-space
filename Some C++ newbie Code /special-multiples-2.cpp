#include <iostream>
using namespace std;


int main2(){
    int n, i=0;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 1 || n >30){
        cout << "Invalid input" << endl;
        return 0;
    }
    while (i <= n ){
        if (i%3==0 && i%4!=0){
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}