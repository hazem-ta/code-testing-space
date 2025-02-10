#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];

    int rows, columns, r1, r2, r1_sum = 0, r2_sum = 0;
    cout << "Enter rows and columns numbers: \n";
    cout << "Rows = ";
    cin >> rows;
    cout << "Columns = ";
    cin >> columns;
    cout << "Enter the matrix values \n";
    cout << "-------------------------\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
        cout << "\n";
    }
    cout << "-------------------------\n";

    cout << "Which rows do you want to compare: ";
    cin >> r1 >> r2;

    for (int i = 0; i < columns; i++)
    {
        r1_sum += matrix[r1-1][i];
        r2_sum += matrix[r2-1][i];
    }

    if (r1_sum > r2_sum)
    {
        cout << "Yes \n";
    }
    else
    {
        cout << "No \n";
    }

    return 0;
}