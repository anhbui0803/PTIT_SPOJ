#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int temp = min(n, m);
    cout << temp << " ";
    temp = max(n, m) - temp;
    cout << temp / 2;
    return 0;
}
