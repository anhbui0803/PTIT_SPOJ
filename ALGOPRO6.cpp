#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
        flag = true;
    }
    if (flag == true) {
        int ans = 0;
        for (int i = 1; i <= 12; i++) {
            switch (i) {
            case 2:
                ans += 165;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                ans += 168;
                break;
            default:
                ans += 172;
                break;
            }
        }
        int temp = 0;
        while (n) {
            temp += n % 10;
            n /= 10;
        }
        ans += 366 * temp;
        ans += 31 * (1 + 3 + 5 + 7 + 8 + 1 + 1 + 2);
        ans += 29 * 2;
        ans += 30 * (4 + 6 + 9 + 1 + 1);
        cout << ans;
    } else {
        int ans = 0;
        for (int i = 1; i <= 12; i++) {
            switch (i) {
            case 2:
                ans += 154;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                ans += 168;
                break;
            default:
                ans += 172;
                break;
            }
        }
        int temp = 0;
        while (n) {
            temp += n % 10;
            n /= 10;
        }
        ans += 365 * temp;
        ans += 31 * (1 + 3 + 5 + 7 + 8 + 1 + 1 + 2);
        ans += 28 * 2;
        ans += 30 * (4 + 6 + 9 + 1 + 1);
        cout << ans;
    }
    return 0;
}
