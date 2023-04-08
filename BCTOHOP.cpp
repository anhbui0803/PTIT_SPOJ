#include <bits/stdc++.h>

using namespace std;

int n, k, a[10];
bool flag = true;

void init() {
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        a[i] = i;
}

void print() {
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}

void sinh() {
    int i = k;
    while (a[i] == n - k + i)
        i--;
    if (i == 0)
        flag = false;
    else
        a[i]++;
    int temp = a[i];
    while (i <= k)
        a[i++] = temp++;
}

void process() {
    while (flag) {
        print();
        sinh();
    }
}

int main()
{
    init();
    process();
    return 0;
}
