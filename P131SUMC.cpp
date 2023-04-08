#include <bits/stdc++.h>

using namespace std;

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main()
{
    double a, b, c, d, e, f, g, h, ans;
    cin >> a >> b >> c >> d;
    e = abs(a / c - b / d);
    f = abs(c / d - a / b);
    g = abs(d / b - c / a);
    h = abs(b / a - d / c);
    ans = max(max(e, f), max(g, h));
    if(ans == e) cout << 0;
    else if (ans == f) cout << 1;
    else if (ans == g) cout << 2;
    else cout << 3;
    return 0;
}
