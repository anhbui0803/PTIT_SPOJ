#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int b[m];
    for (int &x : v) cin >> x;
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        int cnt = 0;
        auto it = upper_bound(v.begin(), v.end(), b[i]);
        cnt += it - v.begin();
        cout << cnt << endl;
    }
    return 0;
}
