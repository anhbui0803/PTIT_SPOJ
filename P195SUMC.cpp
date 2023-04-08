#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[3] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (a[i] == 25) b[0]++;
        else if (a[i] == 50) {
            if (b[0] > 0) {
                b[0]--;
                b[1]++;
            }
            else {
                flag = false;
                break;
            }
        } else {
            if (b[0] > 0 && b[1] > 0) {
                b[0]--;
                b[1]--;
                b[2]++;
            } else if (b[1] == 0 && b[0] >= 3) {
                b[0] -= 3;
                b[2]++;
            } else {
                flag = false;
                break;
            }
        }
    }
    if (flag == true) cout << "YES";
    else cout << "NO";
    return 0;
}
