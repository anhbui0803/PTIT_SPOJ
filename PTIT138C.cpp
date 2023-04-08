#include <bits/stdc++.h>

using namespace std;

bool check(string temp) {
    string str = temp;
    reverse(str.begin(), str.end());
    if (temp == str) return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s, temp = "";
        fflush(stdin); cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
            if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') temp += "2";
            else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') temp += "3";
            else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') temp += "4";
            else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') temp += "5";
            else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') temp += "6";
            else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') temp += "7";
            else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') temp += "8";
            else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') temp += "9";
        }
        if (check(temp) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
