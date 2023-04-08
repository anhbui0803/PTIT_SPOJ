#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a, a + 4);
    int cnt = 1;
    for (int i = 0; i < 4 - 1; i++) {
        if (a[i] != a[i + 1]) cnt++;
    }
    cout << 4 - cnt;
    return 0;
}
