#include <iostream>
using namespace std;

int main()
{

    string str, lettersMap, digitsMap;

    lettersMap = "YZIMNESTODUAPWXHQFBRJKCGVL";
    digitsMap = "!@#$%^&*()";

    cout << "Enter the txt bro: ";
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        // lowercase mapping
        if (97 <= str[i] && str[i] <= 122)
            cout << lettersMap[str[i] - 'a'];
        // digits mapping
        else if (48 <= str[i] && str[i] <= 57)
            cout << digitsMap[str[i] - '0'];
        // uppercase
        else if (65 <= str[i] && str[i] <= 90)
            continue;
    }

    return 0;
}
