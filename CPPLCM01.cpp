#include <bits/stdc++.h>

using namespace std;

#define ll long long

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll temp = gcd(a, b);
        cout << (a * b) / temp << " " << temp << endl;
    }
    return 0;
}
