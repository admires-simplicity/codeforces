#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, steps=0;
	cin >> n >> m;

	//cout << "m = " << m << '\n';
	while (n != m) {
		if (m > n) {
			if (m % 2 == 0) m /= 2;
			else            m += 1;
		} else {
			m += 1;
		}
		steps += 1;
		//cout << "m = " << m << '\n';
	}

	cout << steps << '\n';
}
