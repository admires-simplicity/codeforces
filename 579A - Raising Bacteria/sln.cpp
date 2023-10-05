#include <iostream>

int main() {
	int x;
	int b { 0 };
	std::cin >> x;
	for (int i = 0; i < 32; ++i) {
		if (x & (1 << i)) ++b;
	}
	std::cout << b << '\n'; 
	return 0;
}
