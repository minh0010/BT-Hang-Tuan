#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int so_chia_het_cho_7 = 7;
	while (so_chia_het_cho_7 <= n) {
		cout << so_chia_het_cho_7 << " ";
		so_chia_het_cho_7 += 7;
	}
	return 0;
}