#include <bits/stdc++.h>

using namespace std;

int f[100000] = {0};

void snt() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= sqrt(100000); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j <= 100000; j += i) {
                f[j] = 1;
            }
        }
    }
}

int convert(string str) {
    int res = 0;
    for (int l = 0; l < str.size(); l++) {
        res = res * 10 + (str[l] - '0');
    }
    return res;
}

int main()
{
    snt();
    while (1) {
        string s;
        cin >> s;
        if (s == "0") break;
        int n = s.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            string temp = "";
            for (int j = i; j < i + 5 && j < n; j++) {
                temp += s[j];
                int k = convert(temp);
                if (f[k] == 0 && k > ans) ans = k;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
