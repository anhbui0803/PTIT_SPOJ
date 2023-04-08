#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check(int a) {
    if (a < 2) return false;
    else {
        for (int i = 2; i <= sqrt(a); i++) {
            if (a % i == 0) return false;
        }
    }
    return true;
}

int main()
{
    ll n;
    scanf("%ld", &n);
    if (check(n) == true) printf("%ld 1\n", n);
    else {
        for (ll i = 2; i <= sqrt(n); i++) {
            if (n % i == 0 && check(i) == true) {
                ll cnt = 0;
                while (n % i == 0) {
                    n /= i;
                    cnt++;
                }
                printf("%ld %ld\n", i, cnt);
            }
        }
        if (n != 1 && check(n) == true) printf("%ld 1\n", n);
    }
    return 0;
}
