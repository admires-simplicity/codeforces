#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	if (n > m) {
		cout << n - m << '\n';
		return 0;
	}

	int n_is_even = n % 2 == 0;
	int m_is_even = m % 2 == 0;

	vector<int> steps(m + 1 + !m_is_even);

	//cout << m << '\n';
	//cout << steps.size() << '\n';

	for (int i = 0; i < m; ++i) {
		steps[i] = n - i;
	}

	if (!n_is_even) {
		steps[n+1] = steps[(n+1) / 2] + 1;
	}

	for (int i = (n_is_even ? n + 2 : n + 3); i <= steps.size(); i += 2) {
		steps[i] = steps[i / 2] + 1;
		steps[i - 1] = steps[i] + 1;
	}

	//cout << steps.size() << '\n';
	//for (int i = 0; i < steps.size(); ++i) {
	//	cout << "[" << i << ": " << steps[i] << "], ";
	//}
	//cout << '\n';

	cout << steps[m] << '\n';

	return 0;
}
