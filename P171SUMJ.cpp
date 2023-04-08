#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define FIXED_DOUBLE(x) fixed << setprecision(5) << (x)

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0 && c == 0) cout << -1;
        else if (b == 0 && c != 0) cout << 0;
        else {
            double ans = 0.0;
            ans = ((double)c / b) * (-1);
            cout << 1 << endl;
            cout << FIXED_DOUBLE(ans);
        }
    }
    else {
        ll delta = b * b - 4 * a * c;
        double x1 = 0.0, x2 = 0.0;
        if (delta == 0) {
            x1 = ((double)b / (2 * a)) * (-1);
            cout << 1 << endl;
            cout << FIXED_DOUBLE(x1);
        }
        else if (delta < 0) {
            cout << 0;
        }
        else {
            x1 = (-b - (double)sqrt(delta)) / (2 * a);
            x2 = (-b + (double)sqrt(delta)) / (2 * a);
            cout << 2 << endl;
            cout << FIXED_DOUBLE(min(x1, x2)) << endl << FIXED_DOUBLE(max(x1, x2));
        }
    }
    return 0;
}
