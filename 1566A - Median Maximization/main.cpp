#include <bits/stdc++.h>
using namespace std;

int median(int n) {
	return (n-1) / 2;
}

int solve(int n, int s) {
	// median is highest when the last n - median(n) items are all same highest value
	// so we want
	// highest x s.t. x * (n - median(n)) <= s
	
	int c = n - median(n);
	int lo = 0;
	int hi = s+1;
	int mi = s / 2;

	while (lo < hi) {
		if (mi * c <= s) lo = mi + 1;
		else             hi = mi;
		mi = lo + (hi - lo) / 2;
	}

	return lo - 1;
}

void test() {
	assert(solve(1, 5) == 5);
	assert(solve(2, 5) == 2);
	assert(solve(3, 5) == 2);
	assert(solve(2, 1) == 0);
	assert(solve(7, 17) == 4);
	assert(solve(4, 14) == 4);
	assert(solve(1, 1000000000) == 1000000000);
	assert(solve(1000000000, 1) == 0);

	assert(solve(7, 16) == 4);
	cout << "passed tests\n";
}

int main() {
	test();

	int t;
	for (cin >> t; t; --t) {
		int n, s;
		cin >> n >> s;
		cout << solve(n, s) << '\n';
	}
}

