#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	for (cin >> t; t; --t) {
		int a, b;
		cin >> a >> b;
		if (b > a) swap(a, b);
		int groups{0};
		
		int lo = 0;
		int hi = b+1;
		int mi = lo + (lo + hi) / 2;

		while (lo < hi) {
			// (a - 3x) - (b - x) == (a-b) - 4x is monotonic, so we can bsearch it
			// we want to find the largest x where (a - 3x) - (b - x) >= 0
			//
			// we bsearch to find lo == smallest x which fails
			// then (lo-1) is the greatest such x
			if ((a - 3 * mi) - (b - mi) < 0) hi = mi;
			else                             lo = mi+1;
			mi = lo + (hi - lo) / 2;
		}

		groups = (lo-1) + (b - (lo-1)) / 2;
		cout << groups << '\n';
	}
	return 0;
}
