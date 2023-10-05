#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	//vector<int> fence(n+1);
	deque<int> nums;
	int current_sum;
	int current_start = 1;
	int minimum_sum;
	int minimum_start = 1;

	for (int i = 1; i <= k; ++i) {
		int h_i;
		cin >> h_i;
		nums.push_back(h_i);
		current_sum += h_i;
	}

	minimum_sum = current_sum;

	for (int i = k + 1; i <= n; ++i) {
		int h_i;
		cin >> h_i;
		
		current_start += 1;
		current_sum -= nums.front();
		current_sum += h_i;

		nums.pop_front();
		nums.push_back(h_i);

		if (current_sum < minimum_sum) {
			minimum_sum = current_sum;
			minimum_start = current_start;
		}
	}

	cout << minimum_start << '\n';
}
