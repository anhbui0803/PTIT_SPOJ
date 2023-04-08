#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll du = 1000000007;

ll mu(ll a, ll b) {
    if (b == 0)
        return 1;
    ll t = mu(a, b / 2);
    return (b & 1) ? (a * (t * t % du)) % du : (t * t) % du;
}

int main()
{
    while (1) {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        cout << mu(a, b) << endl;
    }
    return 0;
}

