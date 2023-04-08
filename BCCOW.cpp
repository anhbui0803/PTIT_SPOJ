#include <bits/stdc++.h>

using namespace std;

int a[20], b[20], n, c, sum = 0;
bool flag = true;

void init() {
    cin >> c >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = 0;
    }
}

void sinh() {
    int i = n - 1;
    while (i >= 0 && b[i] == 1) {
        b[i] = 0;
        i--;
    }
    if (i == -1) flag = false;
    else b[i] = 1;
}

void process() {
    while (flag) {
        sinh();
        int temp = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] == 1) temp += a[i];
        }
        if (temp > sum && temp <= c) sum = temp;
    }
    cout << sum;
}

int main()
{
    init();
    process();
    return 0;
}
