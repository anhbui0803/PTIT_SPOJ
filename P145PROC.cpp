#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10], b[42] = {0}, cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        int temp = a[i] % 42;
        b[temp]++;
    }
    for (int i = 0; i < 42; i++) {
        if (b[i] != 0) cnt++;
    }
    cout << cnt;
    return 0;
}
