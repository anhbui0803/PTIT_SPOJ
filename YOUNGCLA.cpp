#include <bits/stdc++.h>

using namespace std;

struct Birth {
    string name;
    int d, m, y;
};

bool cmp(Birth p1, Birth p2) {
    if (p1.y < p2.y) return true;
    else if (p1.y == p2.y) {
        if (p1.m < p2.m) return true;
        else if (p1.m == p2.m) {
            if (p1.d < p2.d) return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    Birth a[n];
    for (int i = 0; i < n; i++) {
        fflush(stdin); cin >> a[i].name >> a[i].d >> a[i].m >> a[i].y;
    }
    sort(a, a + n, cmp);
    cout << a[n - 1].name << endl;
    cout << a[0].name;
    return 0;
}
