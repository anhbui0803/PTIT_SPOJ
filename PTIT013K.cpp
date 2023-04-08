#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll f[12] = {0};

void fact() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= 11; i++) {
        f[i] = f[i - 1] * i;
    }
}

int main()
{
    fact();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll i = 1, sum = 0;
        while (n) {
            int temp = n % 10;
            sum += temp * f[i];
            i++;
            n /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}
