#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        sort(a, a + 3);
        cout << a[2] - a[0] << endl;
    }
    return 0;
}
