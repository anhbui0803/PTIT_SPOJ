#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check(ll n) {
    ll k = sqrt(n);
    if (k * k == n) return true;
    return false;
}

ll sumDiv(ll n) {
    ll ans = 0;
    for (int i = 1; i < sqrt(n); i++) {
        if (n % i == 0) {
            ans += n / i;
            ans += i;
        }
    }
    if (check(n) == true) ans += sqrt(n);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll res = sumDiv(n);
        cout << res << endl;
    }
    return 0;
}

