#include <iostream>
using namespace std;

int main() {
    
    int rows;
    int i = 1 ;

    cout << "Enter number of rows: ";
    cin >> rows;


    while (i <= rows) {
        int j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

i=1;



while (rows >= i)
{
    int f = 1;

    while (f <= rows)
    {
        cout <<"*";
        f++;
    }
    cout << endl;
    rows--;
    
}


cout << endl;












    return 0;
}