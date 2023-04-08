#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    while (n--) {
        int a, b, c, cnt = 0;
        cin >> a >> b >> c;
        if (a == 1) cnt++;
        if (b == 1) cnt++;
        if (c == 1) cnt++;
        if (cnt >= 2) ans++;
    }
    cout << ans;
    return 0;
}
