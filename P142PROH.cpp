#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int row[20] = {0}, col[20] = {0};
    char a[20][20];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
            if(a[i][j] == 'S') {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int ans = 0, temp = 0;
    for (int i = 0; i < r; i++) {
        if (row[i] != 1) {
            ans += c;
            temp++;
        }
    }
    for (int i = 0; i < c; i++) {
        if (col[i] != 1) {
            ans = ans + r - temp;
        }
    }
    cout << ans;
    return 0;
}
