#include <cmath>
#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;

	bool hasPositiveRoot = false;

	if (a == 0) {
		if (b == 0) {
			hasPositiveRoot = (c == 0);
		} else {
			double x = -c / b;
			hasPositiveRoot = (x > 0);
		}
	} else {
		double delta = b * b - 4 * a * c;
		if (delta >= 0) {
			double sqrtDelta = sqrt(delta);
			double x1 = (-b - sqrtDelta) / (2 * a);
			double x2 = (-b + sqrtDelta) / (2 * a);
			hasPositiveRoot = (x1 > 0 || x2 > 0);
		}
	}

	cout << (hasPositiveRoot ? 1 : 0);
	return 0;
}
