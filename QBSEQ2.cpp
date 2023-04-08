#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i] % k;
    }
    int cur = 0;
    for (int i = 0; i < n - cur; i++) {
        int temp = 0;
        for (int j = i; j < n; j++) {
            temp += b[j];
            if (temp % k == 0) {
                if (cur < j - i + 1) cur = j - i + 1;
            }
        }
    }
    cout << cur;
    return 0;
}
