#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 2; j <= sqrt(a[i]); j++) {
            while (a[i] % j == 0) {
                a[i] /= j;
                sum += j;
            }
        }
        if (a[i] != 1) sum += a[i];
    }
    cout << sum;
    return 0;
}
