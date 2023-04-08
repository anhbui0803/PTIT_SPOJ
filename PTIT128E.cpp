#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (1) {
        int n, t1, t2, t3;
        cin >> n >> t1 >> t2 >> t3;
        if (n == 0 && t1 == 0 && t2 == 0 && t3 == 0) break;
        int ans = 3 * n;
        ans += (n - 1); // xoay nguoc chieu kim dong ho tu vi tri t1 - 1 den t1
        if (t2 > t1) ans += (t2 - t1); // xoay theo chieu kim dong ho tu vi tri t1 den t2
        else ans += n - (t1 - t2); // xoay theo chieu kim dong ho tu vi tri t1 den t2
        if (t2 > t3) ans += (t2 - t3); // xoay nguoc chieu kim dong ho tu vi tri t2 den t3
        else ans += n - (t3 - t2); // xoay nguoc chieu kim dong ho tu vi tri t2 den t3
        cout << ans << endl;
    }
    return 0;
}
