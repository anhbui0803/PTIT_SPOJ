#include <bits/stdc++.h>

using namespace std;

int n, a[1005][1005], dp[1005];

void init() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[1][i];
    }
}

void process() {
    dp[0] = 0;
    int Max = a[1];
    for (int i = 1; i <= n; i++) {
        Max = max(Max, a[1][i]);
    }
    cout << Max << " ";
    int k = n - 1;
    for (int i = 2; i <= n; i++) { // count
        Max = INT_MIN;
        for (int j = 1; j <= k; j++) {
            a[j] = min(a[i - 1][j], a[i - 1][j + 1]);
            Max = max(a[i][j], Max);
        }
        k--;
        cout << Max << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
    return 0;
}
