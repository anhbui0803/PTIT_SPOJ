#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int temp = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            temp = i;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (i != temp) cout << s[i];
    }
    return 0;
}
