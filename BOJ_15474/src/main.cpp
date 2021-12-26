#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;

	auto q1 = n / a + (0 == n % a ? 0 : 1);
	auto v1 = b * q1;

	auto q2 = n / c + (0 == n % c ? 0 : 1);
	auto v2 = d * q2;

	cout << (v1 < v2 ? v1 : v2);

	return 0;
}