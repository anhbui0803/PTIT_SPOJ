#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int temp = (y * z) / x;
    int a = sqrt(temp);
    int b = y / a, c = z / a;
    cout << a * 4 + b * 4 + c * 4;
    return 0;
}
