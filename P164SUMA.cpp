#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str1, str2;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (i == 0) {
            str1 = s;
            cnt1++;
        }
        else {
            if (s != str1) {
                str2 = s;
                cnt2++;
            }
            else cnt1++;
        }
    }
    if (cnt1 > cnt2) cout << str1;
    else cout << str2;
    return 0;
}
