#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    int ans = min(m / 2, n);
    int temp1 = m - 2 * ans, temp2 = n - ans;
    k = k - (temp1 + temp2);
    while (k > 0) {
        ans--;
        k -= 3;
    }
    cout << ans;
    return 0;
}
