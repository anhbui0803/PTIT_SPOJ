#include <bits/stdc++.h>

using namespace std;

void push(int b[], int &t, int x) {
    b[t] = x;
    t++;
}

void process(int *a, int n) {
    int k = 2;
    while (k <= n) {
        int b[300], t = 1;
        for (int i = 1; i <= k / 2; i++) {
            int temp1 = (a[i] + a[i + k / 2]) / 2;
            int temp2 = a[i] - temp1;
            push(b, t, temp1);
            push(b, t, temp2);
        }
        for (int i = 1; i <= k; i++) {
            a[i] = b[i];
        }
        k *= 2;
    }
}

int main()
{
    while (1) {
        int a[300], n;
        cin >> n;
        if (n == 0) break;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        process(a, n);
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
