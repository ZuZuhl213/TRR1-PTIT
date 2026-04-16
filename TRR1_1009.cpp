#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if ((a == 0 && b == 0) || (a * b > 0))
        cout << 1;
    else
        cout << 0;

    return 0;
}