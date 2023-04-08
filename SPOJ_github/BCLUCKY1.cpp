#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool lucky(int a) {
    if (a == 0) return false;
    while (a > 0) {
        int temp = a % 10;
        if (temp != 4 && temp != 7) return false;
        a /= 10;
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    int cnt = 0;
    while (n > 0) {
        int tmp = n % 10;
        if (tmp == 4 || tmp == 7) cnt++;
        n /= 10;
    }
    if (lucky(cnt) == true) cout << "YES";
    else cout << "NO";
    return 0;
}
