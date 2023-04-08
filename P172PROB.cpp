#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, start, dest;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'G') {
            start = i;
        }
        if (s[i] == 'T') {
            dest = i;
        }
    }
    bool flag = false;
    if (start > dest) {
        while (start > dest) {
            start -= k;
            if (s[start] == '#') break;
            if (start == dest) {
                flag = true;
                break;
            }
        }
    }
    else {
        while (start < dest) {
            start += k;
            if (s[start] == '#') break;
            if (start == dest) {
                flag = true;
                break;
            }
        }
    }
    if (flag == true) cout << "YES";
    else cout << "NO";
    return 0;
}


