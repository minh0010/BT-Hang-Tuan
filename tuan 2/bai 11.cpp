#include <iostream>
#include <iomanip>
#include <math.h>
#define MAX_N 1000
using namespace std;

void get_var(int n, double mean, double arrayX[]){
	double var = 0;
	for (int i = 0; i < n; ++i) {
		var += pow(arrayX[i] - mean,2);
	}
	var = var / n;
	cout << fixed << setprecision(2) << var;
}

int main() {
	int n;
	cin >> n;
	double arrayX[MAX_N];
	double sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> arrayX[i];
		sum += arrayX[i];
	}
	double mean = sum / n;
	get_var(n, mean, arrayX);
	return 0;
}