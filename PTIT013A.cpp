#include <iostream>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 100 == 86) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
