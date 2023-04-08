#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        vector<int> v;
        int a[n], cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << k << " " << (n + 1) / 2 << endl;
        for (int i = 0; i < n; i++) {
            v.push_back(a[i]);
            if (i % 2 == 0) {
                sort(v.begin(), v.end());
                cout << v[i / 2] << " ";
                cnt++;
                if (cnt == 10) {
                    cout << endl;
                    cnt = 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
