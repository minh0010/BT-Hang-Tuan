#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double factorial(int number) {
	if (number == 0) return 1;
	return number*factorial(number - 1);
}

int main() {
	int x;
	cin >> x;
	double sum = 1, old_sum = 0;
	int count = 1;

	while (sum - old_sum > 0.001) {
		old_sum = sum;
		sum += (pow(x, count) / factorial(count));
		count++;
	}

	cout << fixed << setprecision(4) <<sum;
	return 0;
}