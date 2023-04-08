#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s, ans = "";
        getline(cin, s);
        int n = s.size(), a[26] = {0}, sum = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            if (s[i] == 32) continue;
            int k = s[i] - 97;
            a[k]++;
            if (a[k] == 1) ans += s[i];
        }
        for (int i = 0; i < 26; i++) {
            if (a[i] > 1) sum += a[i];
        }
        cout << sum << " " << ans << endl;
    }
    return 0;
}
