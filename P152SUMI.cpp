#include <bits/stdc++.h>

using namespace std;

int dp[100001] = {0};

void process(string s) {
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) dp[i + 1] += dp[i] + 1;
        else dp[i + 1] = dp[i];
    }
}

int main()
{
    string s;
    int t;
    cin >> s >> t;
    process(s);
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << endl;
    }
    return 0;
}
