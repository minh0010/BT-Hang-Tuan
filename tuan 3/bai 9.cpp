#include <iostream>
#include <ctype.h>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string text;
	getline(cin, text);
	int countStartSpaces = 0;
	for (int i = 0; i < text.length(); ++i) {
		if (text[i] == ' ') ++countStartSpaces;
		else break;
	}
	for (int i = 0; i < text.length() - 1 ; ++i) {
		if (text[i] == ' ' && i == 0) {
			text.erase(i, 1);
			i--;
		}
		else if (text[i] == ' ' && text[i + 1] == ' ') {
			text.erase(i, 1);
			i--;
		}
		else if (text[i] == ' ' && (text[i + 1] == ',' || text[i + 1] == '.')) {
			text.erase(i, 1);
			i--;
		}
	}
	for (int i = 0; i < countStartSpaces; ++i) cout << " ";
	cout << text;
	return 0;
}