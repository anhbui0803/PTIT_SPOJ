#include <bits/stdc++.h>

using namespace std;

bool canOpen(int a[], int b[], int n, int k) {
    for (int j = 0; j < n; j++) {
        if (j != k && a[k] == b[j]) return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (canOpen(a, b, n, i) == true) cnt++;
    }
    cout << n - cnt;
    return 0;
}
