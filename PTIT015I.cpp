#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k, sum = 0, cnt = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if (sum + a[i] < k) {
                cnt++;
                sum += a[i];
            }
            else if (sum + a[i] == k) {
                cnt++;
                break;
            }
            else break;
        }
        cout << cnt << endl;
    }
    return 0;
}
