#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        if (s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i' || s[i] == 'y') continue;
        cout << "." << s[i];
    }
    return 0;
}
