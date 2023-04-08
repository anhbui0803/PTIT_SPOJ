#include <bits/stdc++.h>

using namespace std;

struct data {
    int l, r;
    data(int temp1, int temp2) {
        l = temp1;
        r = temp2;
    }
};

int main()
{
    vector<data> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        v.push_back(data(p, q));
    }
    int ans = -2, lmin = v[0].l, rmax = v[0].r;
    for (int i = 1; i < n; i++) {
        if (v[i].l <= lmin) lmin = v[i].l;
        if (v[i].r >= rmax) rmax = v[i].r;
    }
    for (int i = 0; i < n; i++) {
        if (v[i].l == lmin && v[i].r == rmax) {
            ans = i;
        }
    }
    cout << ans + 1;
    return 0;
}
