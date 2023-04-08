#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        bool flag = true;
        for (int i = 0; i < n; i += 2) {
            if (s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '10') {
                flag = false;
                break;
            }
        }
        if (flag == false) {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; i += 2) {
            if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
                flag = false;
                break;
            }
        }
        if (flag == false) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}
