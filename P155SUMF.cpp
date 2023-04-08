#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n], a[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    a[0] = b[0];
    long long sum = a[0];
    for (int i = 1; i < n; i++) {
        a[i] = b[i] * (i + 1) - sum;
        sum += a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
