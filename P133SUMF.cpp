#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    int diff = a[1] - a[0];
    if (a[2] - a[1] > diff) cout << a[1] + diff;
    else if (a[2] - a[1] < diff) cout << a[0] + diff / 2;
    else if (a[2] - a[1] == diff) cout << a[2] + diff;
    return 0;
}
