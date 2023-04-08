#include <bits/stdc++.h>

using namespace std;

int chua[15], cay[15], a[15], n, diff = 1000000000;
bool flag = true;

void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> chua[i] >> cay[i];
        a[i] = 0;
    }
}

void sinh() {
    int i = n - 1;
    while (i >= 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == -1) flag = false;
    else a[i] = 1;
}

void process() {
    while (flag) {
        sinh();
        int sum = 0, mul = 1;
        for (int j = 0; j < n; j++) {
            if (a[j] == 1) {
                if (chua[j] != 0) mul *= chua[j];
                sum += cay[j];
            }
        }
        if (mul != 1 && sum != 0) {
            diff = min(diff, abs(sum - mul));
        }
    }
    cout << diff;
}

int main()
{
    init();
    process();
    return 0;
}
