#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll f[1000001] = {0};

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
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        ll k = sqrt(a[i]); // nearly prime num is prime num square
        if (a[i] == 1) {
            cout << "NO" << endl;
            continue;
        }
        if (k * k == a[i] && f[k] == 0) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
