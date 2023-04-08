#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size(), r, c, k = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i <= n / i) {
                r = i;
                c = n / i;
            }
        }
    }
    char a[r][c];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            a[j][i] = s[k];
            k++;
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j];
        }
    }
    return 0;
}
