#include <bits/stdc++.h>

using namespace std;

// f(x) = a[0] + a[1] * x + a[2] * x^2 + ... + a[n] * x^n

int n; double a[12];

double f(double x) {
    double ans = 0;
    for (int i = 0; i <= n; i++) {
        ans += a[i] * pow(x, i);
    }
    return ans;
}

int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++) cin >> a[i];
    double l, r;
    if (a[n] > 0) {
        l = -1000000;
        r = 1000000;
    }
    else {
        l = 1000000;
        r = -1000000;
    }
    while (fabs(l - r) > 0.00001) {
        double tmp = (l + r) / 2;
        if (f(tmp) > 0) r = tmp;
        else l = tmp;
    }
    cout << long((l + r) / 2 * 1000);
    return 0;
}
