#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (next_permutation(s.begin(), s.end()) == true) cout << s;
        else cout << "BIGGEST";
        cout << endl;
    }
    return 0;
}
