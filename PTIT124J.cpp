#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 1, temp = 0;
    string ans = "";
    for (int i = n - 1; i >= 0; i--) {
        int k = (int)(s[i] - '0');
        switch(cnt) {
        case 1:
            temp += k;
            break;
        case 2:
            temp += k * 2;
            break;
        case 3:
            temp += k * 4;
            break;
        }
        if (cnt == 3) {
            cnt = 1;
            ans += to_string(temp);
            temp = 0;
        }
        else if (i == 0) ans += to_string(temp);
        else cnt++;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}
