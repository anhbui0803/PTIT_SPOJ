#include <bits/stdc++.h>

using namespace std;

int dp[10001];
int a[9] = {1, 2, 5, 10, 20, 50, 100, 200, 500};

void calc() {
    dp[0] = 0;
    for (int i = 1; i <= 10000; i++) {
        dp[i] = 100;
    }
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < 9; j++) {
            if (a[j] <= i && dp[i - a[j]] + 1 < dp[i]) dp[i] = dp[i - a[j]] + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    calc();
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}
