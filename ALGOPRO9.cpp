#include <bits/stdc++.h>

using namespace std;

int f[100001] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 0; i <= sqrt(100000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 100000; j += i) {
                if (f[j] == 0) f[j] = 1;
            }
        }
    }
}

int main()
{
    snt();
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for (int i = l; i <= r; i++) {
            if (f[i] == 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
