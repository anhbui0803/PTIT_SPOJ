#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] >= a[k] && a[i] > 0) cnt++;
    }
    cout << cnt;
    return 0;
}
