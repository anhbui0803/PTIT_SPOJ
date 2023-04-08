#include <bits/stdc++.h>

using namespace std;

#define ll long long

int f[1000001] = {0};

void snt() {
    f[0] = 0;
    f[1] = 0;
    for (int i = 2; i <= 1000000; i++) {
        for (int j = 1; j <= 1000000 / i; j++) {
            f[j * i] += i;
        }
    }
}

int main()
{
    snt();
    int l, r, cnt = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        if (f[i] - i > i) cnt++;
    }
    cout << cnt;
    return 0;
}

