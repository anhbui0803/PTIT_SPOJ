#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll dp[100001];

ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

void process() {
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= 100000; i++) {
        ll temp = gcd(dp[i - 1], i);
        dp[i] = (dp[i - 1] * i) / temp;
    }
}

int main()
{
    int t;
    cin >> t;
    process();
    while (t--) {
        ll n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}
