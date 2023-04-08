#include <iostream>

using namespace std;

int digit(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    int k = digit(n);
    int temp = k % 3;
    if (temp == 0) temp = 3;
    int a[k];
    for (int i = 0; i < k; i++) {
        a[i] = n % 10;
        n /= 10;
    }
    int cnt = 0, flag = 1;
    for (int i = k - 1; i >= 0; i--) {
        cout << a[i];
        cnt++;
        if (flag == 1 && k > 3) {
            if (cnt == temp) {
                cout << ',';
                cnt = 0;
                flag = 0;
            }
        }
        else {
            if (cnt == 3) {
                if (i != 0) cout << ',';
                cnt = 0;
            }
        }
    }
    return 0;
}
