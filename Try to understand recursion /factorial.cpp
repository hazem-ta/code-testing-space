#include<iostream>
using namespace std;

int factorial(int n) {
	int res = 1;

	for (int i = 2; i <= n; ++i)
		res *= i;

	return res;
}

int main() {
	cout << factorial(3) << endl;
	return 0;
}

