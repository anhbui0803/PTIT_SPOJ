#include <bits/stdc++.h>

using namespace std;

struct PKM {
    string name;
    int k, m, evol;
};

int main()
{
    int n;
    cin >> n;
    PKM a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].k >> a[i].m;
        a[i].evol = 0;
    }

    for (int i = 0; i < n; i++) {
        while (a[i].k <= a[i].m) {
            a[i].evol++;
            a[i].m = a[i].m - a[i].k + 2;
        }
    }
    int sum = 0, max = 0;
    string s;
    for (int i = 0; i < n; i++) {
        if (a[i].evol > max) {
            max = a[i].evol;
            s = a[i].name;
        }
        sum += a[i].evol;
    }
    cout << sum << endl;
    cout << s;
    return 0;
}
