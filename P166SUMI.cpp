#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) cnt++;
    }
    if (cnt > 1 || cnt == 0) cout << "NO";
    else cout << "YES";
    return 0;
}
