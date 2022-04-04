#include <iostream>
#include <algorithm>
#include <iomanip>
#define MAX_SIZE 1000
using namespace std;

int main() {
	int n;
	cin >> n;
	double student_point[MAX_SIZE];
	for (int i = 0; i < n; ++i) {
		cin >> student_point[i];
	}
	sort(student_point, student_point + n, greater<double>());
	for (int i = 0; i < n; ++i) {
		cout << fixed << setprecision(2) << student_point[i] << " ";
	}
	return 0;
}