#include <bits/stdc++.h>
using namespace std;

int kth_not_divisible_by_n(int k, int n) {
	int ans = 0;
	int i = 0;
	while (i < k) {
		++ans;
		if (ans % n != 0) ++i;
	}
	return ans;
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
