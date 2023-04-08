#include <bits/stdc++.h>

using namespace std;

bool check(int a[]) {
    for (int j = 0; j < 4 - 1; j++) {
        if (a[j] != a[j + 1]) return false;
    }
    return true;
}

int main()
{
    while (1) {
        int a[4];
        for (int i = 0; i < 4; i++) {
            cin >> a[i];
        }
        if (a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0) break;
        int cnt = 0;
        while (check(a) == false) {
            int temp = a[0];
            for (int i = 0; i < 4; i++) {
                if (i < 4 - 1) {
                    a[i] = abs(a[i + 1] - a[i]);
                } else a[i] = abs(a[i] - temp);
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}



