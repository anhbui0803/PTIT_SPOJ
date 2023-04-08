#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int f[n + 1] = {0}, cnt = 0;
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (f[i] == 0) {
            cnt++;
            if (cnt == k) {
                cout << i;
                return 0;
            }
            for (int j = i * i; j <= n; j += i) {
                if (f[j] == 0) {
                    cnt++;
                    if (cnt == k) {
                        cout << j;
                        return 0;
                    }
                    f[j] = 1;
                }
            }
        }
    }
    return 0;
}
