#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	for (cin >> t; t; --t) {
		int a, b;
		cin >> a >> b;
		if (b > a) swap(a, b);
		int groups{0};
		while (b && a >= b + 2) {
			++groups;
			a -= 3;
			b -= 1;
		}
		groups += b/2;
		cout << groups << '\n';
	}
	return 0;
}
