#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int dp[m + 1];
    for (int i = 0; i <= m; i++) {
        dp[i] = 100000;
    }
    dp[0] = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] <= i) {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }
    if (dp[m] == 100000) cout << -1;
    else cout << dp[m];
    return 0;
}
