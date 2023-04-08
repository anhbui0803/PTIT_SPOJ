#include <bits/stdc++.h>

using namespace std;

int a[1005], n, dp[1005];

void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void process() {
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int res = dp[0];
    for (int i = 1; i < n; i++) {
        if (res < dp[i]) res = f[i];
    }
    cout << res << endl;
}

int main()
{
    init();
    process();
    return 0;
}
