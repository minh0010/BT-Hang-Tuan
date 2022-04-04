#include <iostream>
#define MAX_SIZE 1000
using namespace std;

int main() {
	int n;
	cin >> n;
	int arrayA[MAX_SIZE];
	for (int i = 0; i < n; ++i) {
		cin >> arrayA[i];
	}

	bool flags = true;
	for (int i = 0; i < n / 2; ++i) {
		if (arrayA[i] == arrayA[n - 1 - i]) {
			continue;
		}
		else {
			flags = false;
			break;
		}
	}
	
	if (flags == true) cout << "Symmetric array.";
	else cout << "Asymmetric array.";
	return 0;
}