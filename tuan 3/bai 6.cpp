#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int num_word = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == ' ' || s[i] == '.') {
			num_word++;
		}
	}
	cout << num_word;
	return 0;
}