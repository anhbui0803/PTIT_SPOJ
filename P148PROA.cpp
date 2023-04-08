#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        int cnt = 1;
        while (n != 1) {
            cnt++;
            if (n % 2 == 0) n /= 2;
            else n = n * 3 + 1;
        }
        cout << cnt << endl;
    }
    return 0;
}
