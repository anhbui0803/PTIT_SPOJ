#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1], b[m + 1];
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= m; i++) {
        cin >> b[i];
    }
    if (n < m) cout << "0/1";
    else if (n > m) {
        if (a[0] * b[0] > 0) cout << "Infinity";
        else cout << "-Infinity";
    }
    else {
        int temp = gcd(a[0], b[0]);
        cout << a[0] / temp << "/" << b[0] / temp;
    }
    return 0;
}
