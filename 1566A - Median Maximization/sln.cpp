#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int median(int n) {
	return (n-1) / 2;
}

int solve(int n, ull s) {
	// median is highest when the last n - median(n) items are all same highest value
	// so we want
	// highest x s.t. x * (n - median(n)) <= s
	//
	// which is also the 1 lower than the lowest x which does not satisfy such inequality
	
	ull c = n - median(n);
	ull lo = 0;
	ull hi = s+1;
	ull mi = s / 2;

	while (lo < hi) {
		if (mi * c <= s) lo = mi + 1;
		else             hi = mi;
		mi = lo + (hi - lo) / 2;
	}

	return lo - 1;
}

int main() {
	int t;
	for (cin >> t; t; --t) {
		int n, s;
		cin >> n >> s;
		cout << solve(n, s) << '\n';
	}
}

