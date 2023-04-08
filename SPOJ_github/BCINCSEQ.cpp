#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for (ll i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    ll max = 1, cnt = 1;
    for (ll i = 0; i < n - 1; i++) {
        if (a[i] <= a[i + 1]) {
            cnt++;
            if (max < cnt) max = cnt;
        }
        else cnt = 1;
    }
    printf("%lld", max);
    return 0;
}
