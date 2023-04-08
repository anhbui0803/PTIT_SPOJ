#include <bits/stdc++.h>

using namespace std;

int f[100001] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= sqrt(100000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 100000; j += i) {
                if (f[j] == 0) f[j] = 1;
            }
        }
    }
}

int sumDigit(int a) {
    int sum = 0;
    while (a) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    snt();
    while (t--) {
        int n;
        cin >> n;
        if (f[n] == 0) cout << "NO" << endl;
        else {
            int sum1 = sumDigit(n), sum2 = 0;
            for (int i = 2; i <= sqrt(n); i++) {
                if (f[i] == 0 && n % i == 0) {
                    while (n % i == 0) {
                        sum2 += sumDigit(i);
                        n /= i;
                    }
                }
            }
            if (n != 1 && f[n] == 0) sum2 += sumDigit(n);
            if (sum1 == sum2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
