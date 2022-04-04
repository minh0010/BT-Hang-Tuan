#include <iostream>
#define MAX_SIZE 1000
using namespace std;

int main() {
	int n;
	cin >> n;
	int arrayA[MAX_SIZE], arrayB[MAX_SIZE];
	for (int i = 0; i < n; ++i) {
		cin >> arrayA[i];
	}
	bool flags = true;
	for (int i = 0; i < n; ++i) {
		cin >> arrayB[i];
		if (arrayB[i] != arrayA[i]) flags = false;
	}
	if (flags == true) cout << "YES";
	else cout << "NO";
	return 0;
}