#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[10000], b[10000] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (b[i] == 0) ans++;
    }
    cout << ans;
    return 0;
}
