#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	vector<int> a(n+1);
	a[0] = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		a[i] += a[i-1];
	}

	//a is strictly increasing
	//for each i
	// binary search the max value x greater than i such that (x - i) < t

	int max_books{0};
	//find max a[j] where a[j] - a[i] <= t.		i.e. a[j] <= t + a[i] = relative_t
	//since a[i] is subtracted, we only get individual book times a[i+1], a[i+2], ..., a[j]
	//i.e. all books included in sum will always be to the right of (greater than) a[i]
	//if there are only max_books to the right, max_books cannot change. i.e. if i + max_books = n.
	//so we loop until i = n - max_books
	//i.e. while i < n - max_books
	for (int i = 0; i < n - max_books; ++i) {
		//looking for max value of j s.t. a[j] <= a[i] + t
		////i.e. let k = the first value of j s.t. a[j] > rel_t, then we want k-1
		int lo = i;
		int hi = n;
		int mi = lo + (hi-lo)/2;
		int rel_t = t + a[i];	
		while (lo < hi) {
			if (a[mi] > rel_t) hi = mi;
			else               lo = mi+1;	
			mi = lo + (hi-lo)/2;
		}
		if (a[hi] <= rel_t) lo += 1;
		if (lo - 1 - i > max_books) max_books = lo - 1 - i;
	}

	std::cout << max_books << '\n';
}

// i didn't finish this
