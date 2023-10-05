#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	vector<ll> counts(2);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;

		if (x >= counts.size()) {
			counts.resize(min(100001, x * 2));
		}

		counts[x] += 1;
	}

	ll best_sum;
	ll i_min_2 = 0;
	ll i_min_1 = 1 * counts[1];
	ll current = i_min_1;

	for (int i = 2; i < counts.size(); ++i) {
	       	current = max(i_min_1, i_min_2 + i * counts[i]);
		i_min_2 = i_min_1;
		i_min_1 = current;
	}
	
	cout << current << '\n';
}

