#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#define EP 0.0001

struct test
{
	string name;
	bool result;
	bool expected;
	string error_Message;
};

void run_test_loop(test list_test[], int test_size)
{
	for (int i = 0; i < test_size; ++i)
	{
		cout << list_test[i].name << ": ";
		if (list_test[i].result == list_test[i].expected)
		{
			cout << "Passed\n";
		}
		else
		{
			cout << list_test[i].error_Message << endl;
		}
	}
}

void SWAP(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void QUICK_SORT(int arr[], int l, int r) {
	if (l >= r) return;
	else if (l + 1 == r) {
		if (arr[l] > arr[r]) SWAP(arr[l], arr[r]);
	}
	else {
		int pivot = arr[r];
		int L = l - 1;
		for (int i = l; i < r; ++i) {
			if (arr[i] <= pivot) {
				L++;
				SWAP(arr[L], arr[i]);
			}
		}
		SWAP(arr[r], arr[L + 1]);
		QUICK_SORT(arr, l, L);
		QUICK_SORT(arr, L + 2, r);
	}
}
int answer(int n, int arr[])
{
	QUICK_SORT(arr, 0, n - 1);
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i] * (n - (i + 1));
	}
	return sum;
}

int main()
{
	int arr1[5] = { 1,2,3,4,5 }; int n1 = 5;
	int arr2[10] = {4, 5, 67,3 ,2, 3,4, 5, 3, 12}; int n2 = 10;

	int num_of_test = 2;
	test list[2] = {
		{
			"test 1",
			answer(n1, arr1) == 20,
			true,
			"result shoud be 20\n"
		},
		{
			"test 2",
			answer(n2, arr2) == 154,
			true,
			"result shoud be 154\n"
}
	};

	run_test_loop(list, num_of_test);

	return 0;
}