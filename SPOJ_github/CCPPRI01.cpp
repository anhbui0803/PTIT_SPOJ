#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                while (n % i == 0) {
                    n /= i;
                    cout << i << " ";
                }
            }
        }
        if (n != 1) cout << n;
        cout << endl;
    }
    return 0;
}
