#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check(ll a) {
    if (a < 2) return false;
    else {
        ll j;
        for (j = 2; j <= sqrt(a); j++) {
            if (a % j == 0) return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        ll i;
        for (i = 2; i <= sqrt(n); i++) {
            if (check(i) == true && n % i == 0) {
                ans = max(ans, i);
                while (n % i == 0) {
                    n /= i;
                }
            }
        }
        if (n != 1 && check(n) == true) ans = max(ans, n);
        cout << ans << endl;
    }
    return 0;
}
