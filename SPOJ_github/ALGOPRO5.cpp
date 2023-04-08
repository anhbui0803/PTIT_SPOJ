#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ll temp = pow(2, i);
        ans += temp;
    }
    cout << ans;
    return 0;
}
