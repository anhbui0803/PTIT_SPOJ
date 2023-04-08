#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s, ans = "";
        cin >> s;
        int n = s.size(), cnt;
        for (int i = 0; i < n; i++) {
            cnt = 0;
            for (int j = i; j < n; j++) {
                if (s[j] == s[i]) cnt++;
                else {
                    i = j - 1;
                    break;
                }
                if (j == n - 1) {
                    i = j;
                    break;
                }
            }
            cout << cnt << s[i];
        }
        cout << endl;
    }
    return 0;
}
