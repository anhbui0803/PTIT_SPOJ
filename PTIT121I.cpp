#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int j, n;
        string s;
        cin >> j >> n >> s;
        cout << j << " ";
        for (int i = 0; i < s.size(); i++) {
            for (int k = 0; k < n; k++) {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
