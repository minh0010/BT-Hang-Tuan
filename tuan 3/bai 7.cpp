#include iostream
#include algorithm
#include string
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int count_alpha = 0, count_number = 0, count_other = 0;
	for (int i = 0; i  s.length() ; ++i) {
		if (isalpha(s[i])) {
			count_alpha++;
		}
		else if (isdigit(s[i])) {
			count_number++;
		}
		else {
			count_other++;
		}
	}
	cout  count_alpha     count_number     count_other;
	return 0;
}