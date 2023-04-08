#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a[n + 1] = { 0 };
        for (int j = 1; j < n; j++) {
            for (int k = 1; k <= n; k++) {
                if (k % (j + 1) == 0) {
                    if (a[k] == 0) a[k] = 1;
                    else if (a[k] == 1) a[k] = 0;
                }
            }
        }
        int res = 0;
        for (int j = 1; j <= n; j++) {
            if (a[j] == 0) res++;
        }
        cout << res;
        cout << endl;
    }
    return 0;
}
