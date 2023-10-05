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
		int hi = b;
		int mi = lo + (lo + hi) / 2;

		while (lo < hi) {
			cout << "lo: " << lo << " hi: " << hi << " mi: " << mi << '\n';
			// we want lo == hi when lo is the
			// largest x where (a - 3x) - (b - x) >= 0
			if ((a - 3 * mi) - (b - mi) < 0) hi = mi;
			else                             lo = mi+1;
			mi = lo + (hi - lo) / 2;
		}

		groups = (lo-1) + (b - (lo-1)) / 2;
		//groups += b/2;
		cout << "lo-1 == " << lo-1 << '\n';
		cout << "(b - (lo-1)) / 2 == " << (b - (lo-1)) / 2 << '\n';
		cout << groups << '\n';
	}
	return 0;
}
