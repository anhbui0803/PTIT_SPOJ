#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll dp[30] = {0}; // catalan number

void catalan() {
    dp[0] = 1;
    for (int i = 1; i <= 30; i++) {
        for (int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
}

int main()
{
    catalan();
    while (1) {
        ll n;
        cin >> n;
        if (n == 0) break;
        cout << dp[n] << endl;
    }
    return 0;
}



