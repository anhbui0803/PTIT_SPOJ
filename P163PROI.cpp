#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int temp1 = min(a * 2 + b * 2, a + c + b);
    int temp2 = min(a * 2 + c * 2, b * 2 + c * 2);
    int ans = min(temp1, temp2);
    cout << ans;
    return 0;
}
