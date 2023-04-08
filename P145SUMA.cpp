#include <bits/stdc++.h>

using namespace std;

bool lucky(string a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != '4' && a[i] != '7') return false;
    }
    return true;
}

int main()
{
    int n;
    string k;
    cin >> n >> k;
    if (lucky(k) == false) cout << "NO";
    else {
        vector<int> v;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n / 2; i++) {
            int temp = k[i] - '0';
            sum1 += temp;
        }
        for (int i = n / 2; i < n; i++) {
            int temp = k[i] - '0';
            sum2 += temp;
        }
        if (sum1 == sum2) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
