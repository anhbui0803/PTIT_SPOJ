#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string temp = s;
        reverse(temp.begin(), temp.end());
        if (temp == s) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
