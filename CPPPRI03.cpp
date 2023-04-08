#include<bits/stdc++.h>

using namespace std;

int f[100001] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= sqrt(100000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 100000; j += i) {
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
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++) {
            if (f[i] == 0) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

