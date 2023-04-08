#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        auto it = m.find(s);
        if (it == m.end()) m.insert(make_pair(s, 1));
        else {
            int sum = 0;
            for (auto it = m.begin(); it != m.end(); it++) {
                if (it->first != s) sum += it->second;
            }
            if (m[s] > sum) {
                ans++;
            }
            m[s]++;
        }
    }
    cout << ans;
    return 0;
}
