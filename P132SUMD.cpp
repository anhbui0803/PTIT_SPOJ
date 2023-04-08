#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b - c) {
        cout << a << "=" << b << "-" << c;
        return 0;
    }
    if (a == b + c) {
        cout << a << "=" << b << "+" << c;
        return 0;
    }
    if (b % c == 0 && a == b / c) {
        cout << a << "=" << b << "/" << c;
        return 0;
    }
    if (a == b * c) {
        cout << a << "=" << b << "*" << c;
        return 0;
    }
    if (c == a - b) {
        cout << a << "-" << b << "=" << c;
        return 0;
    }
    if (c == a + b) {
        cout << a << "+" << b << "=" << c;
        return 0;
    }
    if (c == a * b) {
        cout << a << "*" << b << "=" << c;
        return 0;
    }
    if (a % b == 0 && c == a / b) {
        cout << a << "/" << b << "=" << c;
        return 0;
    }
    return 0;
}
