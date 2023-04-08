#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dp[100] = {0};
    for (int i = 1; i <= 100; i++) {
        dp[i] = dp[i - 1] + i;
    }
    int n, cnt = 0;
    cin >> n;
    for (int i = 2; i <= 100; i++) {
        n -= dp[i];
        cnt++;
        if (n <= 0) {
            break;
        }
    }
    cout << cnt;
    return 0;
}


