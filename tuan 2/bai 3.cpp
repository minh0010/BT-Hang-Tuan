#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int lBount, uBound;
	cin >> lBount >> uBound;

	int  lowerBound = sqrt(lBount), upperBound = sqrt(uBound);
	for (int i = lowerBound; i <= upperBound; ++i) {
		cout << i * i << " ";
	}
	return 0;
}