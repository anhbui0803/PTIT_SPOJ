#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (k % (n - 1) == 0) {
        cout << (k / (n - 1)) * n - 1 << " " << (k / (n - 1)) * n;
    }
    else {
        cout << k / (n - 1) + k << " " << k / (n - 1) + k;
    }
    return 0;
}
