#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (n < 26) cout << "NO";
    else {
        int a[26] = {0};
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (a[i] == 0) {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    return 0;
}
