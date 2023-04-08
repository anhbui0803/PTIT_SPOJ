#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n %= 360;
        int k = gcd(n, 180);
        int tu = n / k, mau = 180 / k;
        if (tu == 1 && mau == 1) {
            cout << "$" << endl;
        }
        if (tu != 1 && mau == 1) {
            cout << "0$" << endl;
        }
        if (tu == 1 && mau != 1) {
            cout << "$/" << mau << endl;
        }
        if (tu != 1 && mau != 1) {
            cout << tu << "$/" << mau << endl;
        }
    }
    return 0;
}
