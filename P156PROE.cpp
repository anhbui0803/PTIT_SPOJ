#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_."; // dont have to take condition into consideration
    while (1) {
        int n;
        string str;
        cin >> n;
        if (n == 0) break;
        cin >> str;
        reverse(str.begin(), str.end());
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '_') cout << s[str[i] - 69 + n];
            else if (str[i] == '.') cout << s[str[i] - 19 + n];
            else cout << s[str[i] - 65 + n];
        }
        cout << endl;
    }
    return 0;
}
