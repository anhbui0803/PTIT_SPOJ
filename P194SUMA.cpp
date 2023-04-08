#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (a[i] <= 0 && k != 0) {
            a[i] *= -1;
            k--;
        } else break;
    }
    sort(a, a + n);
    if (k % 2 == 1) a[0] *= -1;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum;
    return 0;
}
