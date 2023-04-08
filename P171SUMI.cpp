#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size(), a[26] = {0}, cnt = 0;
        for (int i = 0; i < n; i++) {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (a[i] % 2 == 1) cnt++;
            if (cnt > 3) {
                break;
            }
        }
        if (cnt > 3) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
