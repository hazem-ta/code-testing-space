#include <iostream>
using namespace std;

int main() {

    int N,num;
    cout << "Enter the number of elements: ";
    cin>> N;

    int ipp = 1;
    int even_count = 0, odd_count = 0;
    int even_sum = 0, odd_sum = 0;

    while (ipp <= N){
        cout << "Enter the number: ";
        cin >> num;

        if (ipp % 2 == 0){
            even_count++;
            even_sum += num;
        
        }else{
            odd_count++;
            odd_sum += num;
        }
        ipp++;

    }


    double even_av = even_sum/even_count;
    double odd_av = odd_sum/odd_count;
    cout << "The odd average = "<<odd_av<<endl;
    cout << "The even average = "<<even_av<<endl;
    


    return 0;
}