#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<string> v;
    int a[5] = {0};
    for (int i = 0; i < 5 * m + 1; i++) {
        string temp;
        fflush(stdin); cin >> temp;
        v.push_back(temp);
    }
    for (int i = 1; i < 5 * m + 1; i += 5) {
        for (int j = 1; j < 5 * n + 1; j += 5) {
            a[0]++;
            if (v[i][j] == '*') {
                a[1]++;
                a[0]--;
            }
            if (v[i + 1][j] == '*') {
                a[2]++;
                a[1]--;
            }
            if (v[i + 2][j] == '*') {
                a[3]++;
                a[2]--;
            }
            if (v[i + 3][j] == '*') {
                a[4]++;
                a[3]--;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
