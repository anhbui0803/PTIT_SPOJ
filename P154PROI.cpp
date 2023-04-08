#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s, temp;
        cin >> s;
        int n = s.size();
        temp = s;
        reverse(temp.begin(), temp.end());
        bool flag = true;
        for (int i = 1; i < n; i++) {
            int k1 = abs(s[i] - s[i - 1]), k2 = abs(temp[i] - temp[i - 1]);
            if (k1 != k2) {
                flag = false;
                break;
            }
        }
        if (flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
