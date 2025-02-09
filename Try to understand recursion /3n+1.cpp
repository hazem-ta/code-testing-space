#include <iostream>
using namespace std;

int fun(int n)
{

    cout << n << " ";

    if (n == 1)
        return;
    if ((n % 2) == 0)
        return fun(n / 2);
    else
        return fun(3 * n + 1);

    return 0;
}

int main()
{
    fun(6);
    return 0;
}