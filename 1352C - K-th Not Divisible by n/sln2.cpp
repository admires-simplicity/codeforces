#include <bits/stdc++.h>
using namespace std;

void tests();

//int kth_not_divisible_by_n(int k, int n) {
//	if (k < n) {
//		return k;
//	}
//	int sum = 0;
//	int i;
//	for (i = 0; i < k; i += n) {
//		sum += n - 1;
//		cout << "new sum: " << sum << endl;
//	}
//	while (i !
//
//	cout << sum << endl;
//	return sum;
//}

int main() {
	//tests();

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int k, n;
		cin >> n >> k;
		//cout << kth_not_divisible_by_n(k, n) << endl;
		//cout << k + (k-1) / n << endl;
		cout << k + k / n << endl;
	}

	return 0;
}

void tests() {
	//assert(kth_not_divisible_by_n(1, 2) == 1);
	//assert(kth_not_divisible_by_n(2, 2) == 3);
	//assert(kth_not_divisible_by_n(3, 2) == 5);
	//assert(kth_not_divisible_by_n(4, 2) == 7);
}
