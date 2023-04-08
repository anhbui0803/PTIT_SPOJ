#include <bits/stdc++.h>

using namespace std;

int cntDigit(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 10) {
            cout << n << endl;
        }
        else {
            double temp = (double)n;
            int cnt = cntDigit(n) - 1, k = cnt;
            while (cnt--) {
                n = round(temp / 10);
                temp = (double)n;
            }
            n = n * pow(10, k);
            cout << n << endl;
        }
    }
    return 0;
}
