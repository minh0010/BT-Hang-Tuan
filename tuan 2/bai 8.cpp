#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string number;
	cin >> number;
	int count = 0;
	for (int i = 0; i < number.size(); ++i) {
		if (isalnum(number[i])) count++;
	}
	cout << count;
	return 0;
}