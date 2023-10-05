#include <iostream>

int main() {
	int n {0};
	int ac {0};
	int bc {0};
	std::string a;
	std::string b;

	std::cin >> n;
	std::cin >> a;
	++ac;
	for (int i = 1; i < n; ++i) {
		std::string s;
		std::cin >> s;
		if (s == a) ++ac;
		else {
			if (b.empty()) b = s;
			++bc;
		}
	}

	std::cout << ((ac > bc) ? a : b )<< '\n';

	return 0;
}
