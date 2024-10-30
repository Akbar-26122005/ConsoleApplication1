#include <iostream>
using namespace std;

int B(int n) {
	if (n == 1) return 2;
    return 2 * B(n - 1);
}

int main() {
	setlocale(LC_ALL, "RU");

	cout << B(6);

	return 0;
}