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
    snt();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool flag = false;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 2; i <= sqrt(n); i++) {
            if (f[i] == 0 && n % i == 0) {
                cnt2++;
                while (n % i == 0) {
                    cnt1++;
                    n /= i;
                }
            }
        }
        if (n != 1 && f[n] == 0) {
            cnt1++;
            cnt2++;
        }
        if (cnt1 == 3 && cnt2 == 3) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}
