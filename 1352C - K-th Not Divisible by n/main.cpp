#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n, k;
		cin >> n >> k;
		//cout << k + k / n + k % n << '\n';
  		//cout << n * (k / (n-1)) + (k % n) << '\n';
		cout << n / k + n % k << endl;
	}
}
