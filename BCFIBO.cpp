#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll du = 1000000007;
ll f[1000005] = {0};

//ll fib(int n) {
//    if (n == 0)
//        return 0;
//    if (n == 1 || n == 2)
//        return 1;
//    if (f[n])
//        return f[n];
//    int k = (n & 1) ? (n + 1) / 2 : n / 2;
//    f[n] = (n & 1) ? (fib(k) * fib(k) + fib(k - 1) * fib(k - 1)) % du
//            : ((2 * fib(k - 1) + fib(k)) * fib(k)) % du;
//    return f[n];
//}

ll fib(int n) {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % du;
    }
    return f[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
