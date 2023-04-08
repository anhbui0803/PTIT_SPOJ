#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int temp = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'S') temp++;
        if (s[i] == 'L') {
            temp++;
            i++;
        }
    }
    cout << min(temp, n);
    return 0;
}
