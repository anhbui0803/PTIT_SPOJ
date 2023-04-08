#include <bits/stdc++.h>

using namespace std;

int f[51] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= 50; i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 50; j += i) {
                if (f[j] == 0) f[j] = 1;
            }
        }
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    snt();
    if (f[y] == 1) cout << "NO";
    else {
        for (int i = x + 1; i < y; i++) {
            if (f[i] == 0) {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    return 0;
}
