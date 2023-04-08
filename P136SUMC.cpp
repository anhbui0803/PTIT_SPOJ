#include <bits/stdc++.h>

using namespace std;

int reverseNum(int a) {
    int num = 0;
    while (a > 0) {
        num = num * 10 + a % 10;
        a /= 10;
    }
    return num;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int A = reverseNum(a), B = reverseNum(b);
    if (A > B) cout << A;
    else cout << B;
    return 0;
}
