#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n) {
        int temp = n % 10;
        v.push_back(temp);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    if (next_permutation(v.begin(), v.end()) == true) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
    }
    else cout << 0;
    return 0;
}
