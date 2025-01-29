#include <iostream>
#include <string>
using namespace std;

int main()
{
    int input, cursor = -1;
    string name[100], tName;
    int age[100]{0}, salay[100]{0}, tSalary;

    while (true)
    {
        cout << "\n\nProgram of Employee \n";
        cout << "1) Add new employee\n";
        cout << "2) Print all employees\n";
        cout << "3) Delete by age\n";
        cout << "4) update salary by name\n";
        cout << "------------------------\n";
        cout << "Enter choice: ";
        cin >> input;
        cout << "\n";

        if (input == 1)
            cursor++;

        switch (input)
        {
        case 1:
            cout << "Enter the employee name: ";
            cin >> name[cursor];

            cout << "Enter the employee age: ";
            cin >> age[cursor];

            cout << "Enter the employee salary: ";
            cin >> salay[cursor];
            continue;

        case 2:
            for (int i = 0; i <= cursor; i++)
            {
                if (age[i] != -1)
                    cout << name[i] << " " << age[i] << " " << salay[i] << "\n";
            }
            continue;

        case 3:
            cout << "Enter the start and end age.";
            int start, end;
            cout << "\nstart: ";
            cin >> start;

            cout << "end: ";
            cin >> end;

            for (int i = 0; i <= cursor; i++)
            {
                if (start <= age[i] && age[i] <= end)
                {

                    age[i] = -1;
                }
            }

            continue;
        case 4:
            cout << "Enter the name: ";
            cin >> tName;
            cout << "Enter the new salay: ";
            cin >> tSalary;

            for (int i = 0; i <= cursor; i++)
            {
                if (tName == name[i])
                    salay[i] = tSalary;
            }

            continue;
        default:
            cout << "Plase enter a valid choice\n";
            continue;
        }
    }

    return 0;
}