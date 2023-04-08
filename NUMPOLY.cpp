#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long ans = n * (n - 1) * (n - 2) * (n - 3) / 24; // moi giao diem cua 2 duong cheo ung voi 1 bo 4 dinh cua da giac => C(n, 4)
    cout << ans;
    return 0;
}
