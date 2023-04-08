#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    if (k == 0) {
        if (a[0] == 1) {
            cout << -1;
        }
        else {
            cout << 1;
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            int temp = 1;
            for (int j = i; j < n - 1; j++) {
                if (a[j] == a[j + 1]) {
                    temp++;
                }
                else {
                    i = j;
                    break;
                }
            }
            cnt += temp;
            if (cnt == k) {
                cout << a[i];
                break;
            }
            else if (cnt > k) {
                cout << -1;
                break;
            }
        }
    }
    return 0;
}
