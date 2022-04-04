#include <iostream>
#include <algorithm>
#include <iomanip>
#define MAX_SIZE 1000
using namespace std;

int main() {
	int n;
	cin >> n;
	double arrayA[MAX_SIZE];
	for (int i = 0; i < n; ++i) {
		cin >> arrayA[i];
	}
	sort(arrayA, arrayA + n, less<double>());

	double x;
	cin >> x;
	int position;
	for (int i = 0; i < n; ++i) {
		if (x < arrayA[i]) {
			position = i;
			break;
		}
	}
	for (int i = n; i > position; --i) {
		arrayA[i] = arrayA[i - 1];
	}
	arrayA[position] = x;
	for (int i = 0; i <= n; ++i) {
		cout << fixed << setprecision(2) << arrayA[i] << " ";
	}
	return 0;
}