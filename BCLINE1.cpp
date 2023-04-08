#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int temp = 0;
    for (int i = a; i < n; i++) {
        if (n - 1 - i <= b) {
            temp = i;
            break;
        }
    }
    cout << n - temp;
    return 0;
}
