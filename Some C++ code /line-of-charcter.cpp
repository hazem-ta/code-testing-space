#include <iostream>
using namespace std;

int main() {

    int number,i=1;
    char character;

    cout <<"Enter the funking number & character: ";
    cin >> number;
    cin >> character;



    while (i <= number)
    {
        cout << character ;
        i++;
    }
    
    cout << endl;

    return 0;
}