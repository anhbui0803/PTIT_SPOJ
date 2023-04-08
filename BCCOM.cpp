#include <bits/stdc++.h>

using namespace std;

#define ll long long

int sum(int a) {
    int ans = 0;
    while (a > 0) {
        ans += a % 10;
        a /= 10;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int temp = sum(n);
        while (temp > 9) {
            temp = sum(temp);
        }
        cout << temp << endl;
    }
    return 0;
}
