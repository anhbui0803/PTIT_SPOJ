#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        float a, b, c;
        cin >> a >> b >> c;
        float x = sqrt(b * c / a);
        float y = b / x, z = c / x;
        cout << x * 4 + y * 4 + z * 4 << endl;
    }
    return 0;
}
