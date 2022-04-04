#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		double p = (a + b + c) / 2.0;
		double s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << fixed << setprecision(2) << s;
	}
	else {
		cout << "invalid";
	}
	return 0;
}