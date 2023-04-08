#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c[3];
    cin >> a >> b;
    for(int i = 0; i < 3; i++) {
        cin >> c[i];
    }
    sort(c, c + 3);
    if (a > b) swap(a, b);
    if (c[0] * c[0] + c[1] * c[1] == c[2] * c[2]) {
        if (a >= c[0] && b >= c[1]) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
    return 0;
}
