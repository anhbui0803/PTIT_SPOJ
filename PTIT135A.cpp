#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int f[101] = {0}, den[3], di[3];
    for (int i = 0; i < 3; i++) {
        cin >> den[i] >> di[i];
    }
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = den[i]; j < di[i]; j++) {
            f[j]++;
        }
    }
    for (int i = 1; i <= 100; i++) {
        if (f[i] == 1) ans += a;
        else if (f[i] == 2) ans += 2 * b;
        else if (f[i] == 3) ans += 3 * c;
    }
    cout << ans;
    return 0;
}
