#include <bits/stdc++.h>

using namespace std;

int deleteZero(int k) {
    vector<int> v;
    while (k) {
        v.push_back(k % 10);
        k /= 10;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 0) v.erase(v.begin() + i);
    }
    int ans = 0;
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        ans = ans * 10 + v[i];
    }
    return ans;
}

int main()
{
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    a = deleteZero(a);
    b = deleteZero(b);
    sum = deleteZero(sum);
    if (a + b == sum) cout << "YES";
    else cout << "NO";
    return 0;
}
