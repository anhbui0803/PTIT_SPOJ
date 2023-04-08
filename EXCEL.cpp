#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    while (1) {
        char ch;
        ll n, m;
        cin >> ch >> n >> ch >> m;
        if (n == 0 && m == 0) break;
        string s = "";
        while (m > 26) {
            int k = m % 26;
            m /= 26;
            if (k == 0) {
                m--;
                s.push_back('Z');
            }
            else {
                char temp = k + 64;
                s.push_back(temp);
            }
        }
        if (m > 0) {
            char temp = m + 64;
            s.push_back(temp);
        }
        reverse(s.begin(), s.end());
        cout << s << n << endl;
    }
    return 0;
}
