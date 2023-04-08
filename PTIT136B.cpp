#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[2 * r][2 * c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char ch;
            cin >> ch;
            if (ch == '#') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    int A, B;
    cin >> A >> B;
    for (int i = 0; i < r; i++) {
        for (int j = c; j < 2 * c; j++) {
            a[i][j] = a[i][2 * c - j - 1];
        }
    }
    for (int i = r; i < 2 * r; i++) {
        for (int j = 0; j < 2 * c; j++) {
            a[i][j] = a[2 * r - i - 1][j];
        }
    }
    for (int i = 0; i < 2 * r; i++) {
        for (int j = 0; j < 2 * c; j++) {
            if (i == A - 1 && j == B - 1) {
                if (a[i][j] == 0) a[i][j] = 1;
                else a[i][j] = 0;
            }
            if (a[i][j] == 1) cout << "#";
            else cout << ".";
        }
        cout << endl;
    }
    return 0;
}

