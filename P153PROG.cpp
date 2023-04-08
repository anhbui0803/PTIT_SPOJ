#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    ll temp;
    if (n % 2 == 0) temp = n / 2;
    else temp = n / 2 + 1;
    if (k <= temp) {
        cout << 1 + (k - 1) * 2;
    }
    else {
        cout << 2 + (k - temp - 1) * 2;
    }
    return 0;
}
