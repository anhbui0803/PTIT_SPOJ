#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (a[i] + a[j] + a[k] <= m) sum = max(sum, a[i] + a[j] + a[k]);
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}

