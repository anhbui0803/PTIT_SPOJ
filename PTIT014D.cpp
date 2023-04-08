#include <bits/stdc++.h>

using namespace std;

int sumDigit(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += (s[i] - '0');
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s == "0") {
            cout << 0 << endl;
            continue;
        }
        int k = sumDigit(s);
//        while (k > 10) {
//            k = sumDigit(s);
//            s = to_string(k);
//        }
//        if (k == 9) cout << 1 << endl;
//        else cout << 0 << endl;
        if (k % 9 == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
