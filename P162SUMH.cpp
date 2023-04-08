#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') sum += 3;
        if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') sum += 4;
        if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') sum += 5;
        if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') sum += 6;
        if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') sum += 7;
        if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') sum += 8;
        if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') sum += 9;
        if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') sum += 10;
    }
    cout << sum;
    return 0;
}
