#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cntUpper = 0, cntLower = 0, n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') cntUpper++;
        else cntLower++;
    }
    if (cntLower >= cntUpper) {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        }
    }
    cout << s;
    return 0;
}
