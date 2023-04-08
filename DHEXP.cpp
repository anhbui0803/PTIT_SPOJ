#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n, greater<int>());
    long long sum = a[0];
    for (int i = 1; i <= k; i++) {
        sum += a[i];
    }
    for (int i = k + 1; i < n; i++) {
        sum -= a[i];
    }
    cout << sum;
    return 0;
}

