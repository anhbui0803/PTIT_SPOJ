#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

bool prime(int t) {
    if (t < 2) return false;
    for (int i = 2; i <= sqrt(t); i++) {
        if (t % i == 0) return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (gcd(i, n) == 1) cnt++;
        }
        if (prime(cnt)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
