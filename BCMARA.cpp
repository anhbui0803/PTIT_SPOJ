#include <bits/stdc++.h>

using namespace std;

struct Time {
    int h, m, s;
};

bool cmp(Time t1, Time t2) {
    if (t1.h < t2.h) return true;
    else if (t1.h == t2.h) {
        if (t1.m < t2.m) return true;
        else if (t1.m == t2.m) {
            if (t1.s < t2.s) return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    Time t[n];
    for (int i = 0; i < n; i++) {
        cin >> t[i].h >> t[i].m >> t[i].s;
    }
    sort(t, t + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << t[i].h << " " << t[i].m << " " << t[i].s << endl;
    }
    return 0;
}
