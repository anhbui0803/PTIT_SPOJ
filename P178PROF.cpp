#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (1) {
        int n, cnt = 1;
        cin >> n;
        if (n == 0) break;
        while (n != 1) {
            cnt++;
            if (n % 2 == 0) n /= 2;
            else n = 3 * n + 1;
        }
        cout << cnt << endl;
    }
    return 0;
}
