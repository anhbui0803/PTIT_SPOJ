#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    int cnt = 0, temp = 0;
    for (int i = n - 1; i >= 0; i--) {
        switch (cnt) {
        case 0:
            temp += (int)s[i] - '0';
            break;
        case 1:
            temp += ((int)s[i] - '0') * 2;
            break;
        case 2:
            temp += ((int)s[i] - '0') * 4;
            break;
        }
        cnt++;
        if (cnt == 3) {
            ans += to_string(temp);
            cnt = 0;
            temp = 0;
        } else if (i == 0) {
            ans += to_string(temp);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}
