#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, s, a, b, c, d, e;
    cin >> x >> s >> a >> b >> c >> d >> e;
    int temp = x * s;
    cout << a - temp << " " << b - temp << " " << c - temp << " " << d - temp << " " << e - temp;
    return 0;
}
