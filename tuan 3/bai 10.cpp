#include <iostream>
#include <string>
using namespace std;

int main() {
	string user_name;
	cin >> user_name;
	bool flags = true;
	for (int i = 0; i < user_name.length(); ++i) {
		if (isalpha(user_name[i]) == false && isdigit(user_name[i]) == false) {
			flags = false;
			break;
		}
	}
	if (isdigit(user_name[0]) || user_name.length() < 6 || user_name.length() > 15) {
		flags = false;
	}
	if (flags == true) {
		cout << "Valid username.";
	}
	else {
		cout << "Invalid username.";
	}

	return 0;
}