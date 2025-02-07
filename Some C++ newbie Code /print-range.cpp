#include <iostream>
using namespace std;

int main() {
	
	int startNumber,endNmber;
    
    cout<<"Enter the start number: ";
	cin>>startNumber;

    cout<<"Enter the end number: ";
    cin>>endNmber;

    int iterator = startNumber;

    while(iterator <= endNmber){
        cout << iterator << endl;
        iterator++;
    }
    
    return 0;
}
