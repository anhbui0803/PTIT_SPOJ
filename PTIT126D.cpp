#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

int main()
{
    while (1) {
        int k;
        cin >> k;
        if (k == 0) break;
        int a[k];
        vi v;
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
            while (v.size() < a[i]) {
                v.push_back(i);
            }
        }
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
