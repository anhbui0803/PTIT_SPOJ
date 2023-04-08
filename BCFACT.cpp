#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//ll dp[18] = {0};
//
//void calc() {
//    dp[0] = 1;
//    dp[1] = 1;
//    for (int i = 2; i <= 17; i++) {
//        dp[i] = dp[i - 1] * i;
//    }
//}
//
//int main()
//{
//    calc();
//    int n = 1;
//    while (n) {
//        cin >> n;
//        if (n == 0) break;
//        cout << dp[n] << endl;
//    }
//    return 0;
//}


ll fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        cout << fact(n) << endl;
    }
    return 0;
}
