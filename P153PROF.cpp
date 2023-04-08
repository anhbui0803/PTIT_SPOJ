#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < n) {
        if (a[i] < b[j]) {
            cnt++;
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    cout << cnt;
    return 0;
}
