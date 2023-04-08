#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    int sign = -1;
    if (n % 2 == 0) {
        cout << n / 2;
    }
    else {
        cout << sign * ((n + 1) / 2);
    }
    return 0;
}
