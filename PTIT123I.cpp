#include <bits/stdc++.h>

using namespace std;

int f[247001] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= sqrt(247000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 247000; j += i) {
                if (f[j] == 0) f[j] = 1;
            }
        }
    }
}

int main()
{
    snt();
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if (f[i] == 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
