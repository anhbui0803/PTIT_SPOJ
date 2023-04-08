#include <bits/stdc++.h>

using namespace std;

struct Time {
    int s, f;
};

bool cmp(Time t1, Time t2) {
    if (t1.f < t2.f) return true;
    else if (t1.f == t2.f) {
        if (t1.s < t2.s) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    Time a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].s >> a[i].f;
    }
    sort(a, a + n, cmp);
    int cnt = 0, temp = a[0].s;
    for (int i = 0; i < n; i++) {
        if (a[i].s >= temp) {
            temp = a[i].f;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
