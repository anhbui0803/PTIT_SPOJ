#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n % 4;
    if (n == 0) {
        cout << 1;
        return 0;
    }
    if (temp == 1) cout << 8;
    if (temp == 2) cout << 4;
    if (temp == 3) cout << 2;
    if (temp == 0) cout << 6;
    return 0;
}
