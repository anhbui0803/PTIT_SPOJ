#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[3001] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= 3000; i++) {
        if (b[i] == 0) {
            cout << i;
            return 0;
        }
    }
    cout << n + 1;
    return 0;
}
