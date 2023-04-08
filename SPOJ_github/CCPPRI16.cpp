#include <bits/stdc++.h>

using namespace std;

int f[1000001] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= sqrt(1000000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 1000000; j += i) {
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
        long long n;
        cin >> n;
        int cnt = 0;
        for (long long i = 2; i <= sqrt(n); i++) {
            if (f[i] == 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
