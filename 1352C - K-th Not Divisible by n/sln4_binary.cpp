#include <bits/stdc++.h>
using namespace std;

int easy_kth_not_divisible_by_n(int k, int n) {
	int ans = 0;
	int i = 0;
	while (i < k) {
		++ans;
		if (ans % n != 0) ++i;
	}
	return ans;
}

int kth_not_divisible_by_n(int k, int n) {
	int low = 0;
	int high = 1e10;
	int mid;
	while (low < high) {
		mid = low + (high - low) / 2;
		if (k >= mid - mid / n) {
			low = mid;
		} else {

		}
	}
	return x;
}

int main() {
	void test();
	test();
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int k, n;
		cin >> n >> k;
		cout << kth_not_divisible_by_n(k, n) << endl;
	}

	return 0;
}

void test() {
	for (int i = 1; i < 100; ++i) {
		for (int j = 2; j < 100; ++j) {
			cout << "testing " << i << ", " << j << endl;
			cout << easy_kth_not_divisible_by_n(i, j) << endl;
		       	cout <<	kth_not_divisible_by_n(i, j) << endl;

			assert(kth_not_divisible_by_n(i, j) == easy_kth_not_divisible_by_n(i, j));
		}
	}
	cout << "tests passed" << endl;
}
