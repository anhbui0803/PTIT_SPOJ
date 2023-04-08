#include <iostream>

using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    ll a, b;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        ll temp = gcd(a, b);
        cout << temp << " " << (a * b) / temp << endl;
    }
    return 0;
}
