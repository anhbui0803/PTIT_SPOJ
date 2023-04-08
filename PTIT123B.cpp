#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int n) {
    for (int j = 0; j < n - 1; j++) {
        if (a[j] != a[j + 1]) return false;
    }
    return true;
}

int main()
{
    int Case = 1;
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        while (check(a, n) == false && cnt <= 1000) {
            int temp = a[0];
            for (int i = 0; i < n; i++) {
                if (i < n - 1) {
                    a[i] = abs(a[i + 1] - a[i]);
                } else a[i] = abs(a[i] - temp);
            }
            cnt++;
        }
        if (cnt != 1001) cout << "Case " << Case << ": " << cnt << " iterations";
        else cout << "Case " << Case << ": " << "not attained";
        cout << endl;
        Case++;
    }
    return 0;
}



