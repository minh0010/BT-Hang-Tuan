#include <iostream>
using namespace std;

int main() {
	int total, totalLegs;
	cin >> total >> totalLegs;
	bool flag = false;
	for (int numChicken = 1; numChicken <= total; ++numChicken) {
		if ((numChicken * 2 + (total - numChicken) * 4) == totalLegs) {
			cout << "chicken = " << numChicken << ", dog = " << total - numChicken;
			flag = true;
		}
	}
	if (flag == false) {
		cout << "invalid" << endl;
	}
	return 0;
}