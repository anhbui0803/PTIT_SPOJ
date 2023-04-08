#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    int cnt = 0, n = s.size(), sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        int k = s[i] - '0';
        sum += k * pow(2, cnt);
        cnt++;
        if (cnt == 3) {
            cnt = 0;
            v.push_back(sum);
            sum = 0;
        }
        else if (i == 0) {
            v.push_back(sum);
        }
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    return 0;
}
