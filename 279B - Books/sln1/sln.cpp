#include <iostream>
#include <deque>

int main() {
	int n;
	int t;
	std::deque<int> book_times;
	int time_sum{0};
	int n_books{0};
	int max_books{0};
	std::cin >> n >> t;
	for (int i = 0; i < n; ++i) {
		int itime;
		std::cin >> itime;

		if (itime > t) {
			time_sum = 0;
			book_times.clear();
			n_books = 0;
			continue;
		}

		while (time_sum + itime > t) {
			time_sum = time_sum - book_times.front();
			book_times.pop_front();
			n_books -= 1;
		}

		time_sum = time_sum + itime;
		book_times.push_back(itime);
		n_books += 1;

		if (n_books > max_books) max_books = n_books;
	}
	std::cout << max_books << '\n';
	return 0;
}
