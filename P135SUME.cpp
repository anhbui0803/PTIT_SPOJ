#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[8], n = 8;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool ascend;
    if (a[1] > a[0]) ascend = true;
    else ascend = false;
    if (ascend == true) {
        bool flag = false;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                flag = true;
                break;
            }
        }
        if (flag == true) cout << "mixed";
        else cout << "ascending";
    }
    else {
        bool flag = false;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                flag = true;
                break;
            }
        }
        if (flag == true) cout << "mixed";
        else cout << "descending";
    }
    return 0;
}
