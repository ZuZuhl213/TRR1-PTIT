#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    int p = 0;

    if (a == 0) {
        // bx^2 + c = 0
        if (b == 0) {
            if (c == 0) p = 1;
        } else {
            double t = -c / b;
            if (t >= 0) p = 1;
        }
    } else {
        double d = b * b - 4 * a * c;
        if (d >= 0 && (a*b <= 0) || (c / a <= 0)) {
            p = 1;
        }
    }

    cout << p;
    return 0;
}