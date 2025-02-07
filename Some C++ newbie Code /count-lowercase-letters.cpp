#include <iostream>
using namespace std;

int main() {
	string str;

	cin >> str;

	int frequency[26] = {0};	// initalize to zeros

	for (int i = 0; i < str.size(); ++i)
		frequency[(str[i]-'a')]++;	// Use char as frequency

    //Here we count and print lowercase letters only

	for (int i = 0; i < 26; ++i) {
		if (frequency[i])
			cout << (char) ('a'+i) << " " << frequency[i] << "\n";
	}

	return 0;
}
