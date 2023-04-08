#include<bits/stdc++.h>

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

int main() {
    int t;
    cin >> t;
    snt();
    while (t--) {
        int l, r;
        cin >> l >> r;
        int count = 0;
        for (int i = l; i <= r; i++) {
            if (f[i] == 0) {
                if (i + 6 <= r && f[i + 6] == 0) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

