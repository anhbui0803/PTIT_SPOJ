#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[24][60];
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 60; j++) {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        a[h][m]++;
    }
    int cnt = 1;
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 60; j++) {
            if (a[i][j] > cnt) cnt = a[i][j];
        }
    }
    cout << cnt;
    return 0;
}
