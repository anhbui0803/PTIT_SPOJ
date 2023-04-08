#include <bits/stdc++.h>

using namespace std;

int f[10001] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= sqrt(10000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 10000; j += i) {
                if (f[j] == 0) f[j] = 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    snt();
    while (t--) {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        int ans = -1;
        for (int i = 2; i <= sqrt(n); i++) {
            if (f[i] == 0 && n % i == 0) {
                while (n % i == 0) {
                    cnt++;
                    n /= i;
                    if (cnt == k) {
                        ans = i;
                    }
                    if (ans != -1) break;
                }
            }
            if (ans != -1) break;
        }
        if (n != 1 && f[n] == 0) {
            cnt++;
            if (cnt == k) ans = n;
        }
        cout << ans << endl;
    }
    return 0;
}
