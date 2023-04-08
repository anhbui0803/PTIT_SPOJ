#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            temp.push_back(k);
        }
        v.push_back(temp);
    }
    if (n > 2) {
        int a[n] = {0};
        a[n - 1] = (v[n - 2][n - 1] - v[n - 3][n - 2] + v[n - 3][n - 1]) / 2;
        a[0] = v[0][n - 1] - a[n - 1];
        for (int i = 1; i < n; i++) {
            a[i] = v[0][n - i] - a[0];
        }
        reverse(a + 1, a + n);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
    else {
        int a[2] = {0};
        for (int i = 0; i <= v[0][1] / 2; i++) {
            if (v[0][1] - i <= 100000) {
                a[0] = i;
                a[1] = v[0][1] - i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
