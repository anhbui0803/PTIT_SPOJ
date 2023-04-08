#include <bits/stdc++.h>

using namespace std;

int f[1000001] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= sqrt(1000000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 1000000; j += i) {
                if (f[j] == 0) f[j] = i;
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
        for (int i = 1; i <= n; i++) {
            if (f[i] == 0) cout << i << " ";
            else cout << f[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
