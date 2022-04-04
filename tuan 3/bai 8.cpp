#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string text;
	getline(cin, text);
	for (int i = 0; i < text.size() - 3; ++i) {
		if (text.substr(i, 4) == "Zues") {
			text[i + 1] = 'e';
			text[i + 2] = 'u';
		}
	}
	cout << text;
	return 0;
}