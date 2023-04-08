#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[5001] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (b[i] == 0) cnt++;
    }
    cout << cnt;
    return 0;
}
