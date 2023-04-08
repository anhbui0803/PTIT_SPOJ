#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 1; i <= 6; i++) {
        if (abs(i - a) < abs(i - b)) cnt1++;
        if (abs(i - a) == abs(i - b)) cnt2++;
        if (abs(i - a) > abs(i - b)) cnt3++;
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3;
    return 0;
}

