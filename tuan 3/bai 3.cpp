
#include <iostream>
#include <algorithm>
#include <iomanip>
#define MAX_SIZE 1000
using namespace std;

int main() {
	int n;
	cin >> n;
	int arrayA[MAX_SIZE], arrayB[MAX_SIZE];
	for (int i = 0; i < n; ++i) {
		cin >> arrayA[i];
	}
	int k = 0;
	for (int i = 0; i < n; ++i) {
		bool flags = true;
		for (int j = i + 1; j < n; j++) {
			if (arrayA[i] == arrayA[j]) {
				flags = false;
				break;
			}
		}
		if (flags == true) {
			arrayB[k] = arrayA[i];
			++k;
		}
	}
	for (int i = 0; i < k; ++i) cout << arrayB[i] << " ";
	return 0;
}