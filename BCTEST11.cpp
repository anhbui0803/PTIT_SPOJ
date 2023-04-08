#include <bits/stdc++.h>

using namespace std;

bool lucky(int n) {
    while (n > 0) {
        int temp = n % 10;
        if (temp != 4 && temp != 7) return false;
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (lucky(n) == true) cout << "YES";
    else {
        bool flag = false;
        for (int i = 4; i <= n / 2; i++) {
            if (lucky(i) == true) {
                if (n % i == 0) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag == true) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
