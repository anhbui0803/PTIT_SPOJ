#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int sum = 0, i = 1, n, cnt = 0;
    cin >> n;
    while (1) {
        cnt++;
        sum += i;
        n -= sum;
        if (n < 0) {
            cout << cnt - 1;
            break;
        }
        if (n == 0) {
            cout << cnt;
            break;
        }
        i++;
    }
    return 0;
}
