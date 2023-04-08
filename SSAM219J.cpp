#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n; ll k;
ll a[100005];

int binSearch(int l, int r, ll val) {
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == val) {
            return m;
        }
        else if (a[m] < val) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return -1;
}

void solve() {
    if (k == 0) {
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
    else {
        for (int i = 1; i < n; i++) {
            a[i] = a[i - 1] + a[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                cout << "YES" << endl;
                return;
            }
            if (a[i] > k) {
                int temp = binSearch(0, n - 1, a[i] - k);
                if (temp != -1) {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        cout << "NO" << endl;
    }
}

int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(NULL);
//    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        solve();
    }
    return 0;
}
