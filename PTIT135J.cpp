#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        double n, l, m;
        cin >> n >> l >> m;
        int cnt = 0;
        while (n < m) {
            n = n + n * l / 100;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
