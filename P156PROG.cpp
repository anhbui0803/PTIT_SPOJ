#include <bits/stdc++.h>

using namespace std;

struct data {
    int x, y;
};

data a[1000000], b[1000000];

void init(int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i].x;
        a[i].y = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i].x;
        b[i].y = i;
    }
}

bool cmp(data t1, data t2) {
    return (t1.x < t2.x) ? true : false;
}

void solve(int n) {
    sort(a, a + n, cmp);
    sort(b, b + n, cmp);
    for (int i = n - 1; i >= 0; i--) {
        if (a[i].y != b[i].y) {
            cout << n - i << endl;
            return;
        }
    }
    cout << "agree" << endl;
}

int main() {
    int t = 0, n;
    while (cin >> n) {
        t++;
        init(n);
        cout << "Case " << t << ": ";
        solve(n);
    }
}
