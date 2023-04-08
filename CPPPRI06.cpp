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
        int n;
        cin >> n;
        for (int i = 2; i <= n / 2; i++) {
            if (f[i] == 0 && f[n - i] == 0) {
                cout << i << " " << n - i << endl;
                break;
            }
        }
    }
    return 0;
}
