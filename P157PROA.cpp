#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[1001] = {0};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[a[i]]++;
        }
        int max = 0;
        for (int i = 0; i < 1001; i++) {
            if (b[i] > max) max = b[i];
        }
        for (int i = 0; i < 1001; i++) {
            if (b[i] == max) {
                cout << i;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
