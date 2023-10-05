#include <bits/stdc++.h>
using namespace std;

int sum_of_first(int n) {
	return (n * (n + 1)) / 2;
}

int time_to_solve(int n) {
	return 5 * sum_of_first(n);
}

int main() {
	int n, k;
	cin >> n >> k;

	int lo = 0;
	int hi = n;
	int mid;

	if (k + time_to_solve(n) <= 240) {
		cout << n << endl;
		return 0;
	}

	//want to find:
	//smallest value X, where k + time_to_solve(X) >= 240
	//T == k+t(X) < 240	F == k+t(X) >= 240

	while (lo < hi) {
		mid = lo + (hi - lo) / 2;
		if (k + time_to_solve(mid) <= 240) {
			hi = mid - 1;
		} else {
			lo = mid;
		}
	}

	cout << lo << endl;
	return 0;
}
