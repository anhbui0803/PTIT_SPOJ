#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        map<int, int> m;
        int n;
        cin >> n;
        int a[n], ans = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            auto it = m.find(a[i]);
            if (it == m.end()) m.insert(make_pair(a[i], 1));
            else m[a[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (m[a[i]] > 1) {
                ans = a[i];
                break;
            }
        }
        if (ans != -1) cout << ans << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
