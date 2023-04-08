#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[2] = {3, 5};
    int n;
    cin >> n;
    int dp[5000];
    dp[0] = 0;
    for (int i = 1; i < 5000; i++) {
        dp[i] = 100000;
    }
    for (int i = 1; i < 5000; i++) {
        for (int j = 0; j < 2; j++) {
            if (a[j] <= i && dp[i - a[j]] + 1 <= dp[i]) dp[i] = dp[i - a[j]] + 1;
        }
    }
    if (dp[n] == 100000) cout << -1;
    else cout << dp[n];
    return 0;
}
