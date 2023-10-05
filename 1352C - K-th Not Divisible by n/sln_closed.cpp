#include <bits/stdc++.h>
using namespace std;

int kth_not_divisible_by_n(int k, int n) {
	return k + ((k - 1) / (n - 1));
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int k, n;
		cin >> n >> k;
		cout << kth_not_divisible_by_n(k, n) << endl;
	}

	return 0;
}
