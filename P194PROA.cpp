#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c, temp = 0;
        cin >> a >> b >> c;
        if (a == 1) temp++;
        if (b == 1) temp++;
        if (c == 1) temp++;
        if (temp >= 2) cnt++;
    }
    cout << cnt;
    return 0;
}
