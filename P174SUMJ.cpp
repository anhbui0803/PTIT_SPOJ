#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[1001] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i] && b[j] == 0) {
                cnt++;
                b[j] = 1;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}
