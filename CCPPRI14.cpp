#include <bits/stdc++.h>

using namespace std;

#define ll long long

int f[1000001] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= sqrt(1000000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 1000000; j += i) {
                if (f[j] == 0) f[j] = 1;
            }
        }
    }
}

int main()
{
    snt();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for (ll i = 2; i <= sqrt(n); i++) {
            ll ans = 0;
            if (f[i] == 0) {
                ans = i * i;
                cout << ans << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
