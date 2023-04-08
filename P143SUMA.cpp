#include <bits/stdc++.h>

using namespace std;

struct Dragon {
    int x, y;
};

bool cmp(Dragon d1, Dragon d2) {
    if (d1.x < d2.x) return true;
    else if (d1.x == d2.x) {
        if (d1.y > d2.y) return true;
    }
    return false;
}

int main()
{
    int s, n;
    cin >> s >> n;
    Dragon a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        if (s > a[i].x) s += a[i].y;
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
