#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> v;
    for (int i = 0; i < 4; i++) {
        string temp;
        fflush(stdin); cin >> temp;
        v.push_back(temp);
    }
    bool flag = false;
    for (int i = 0; i < 3; i++) {
        int a[2] = {0}; // a[0] = black, a[1] = white
        if (v[i][i] == '#') a[0]++;
        if (v[i + 1][i] == '#') a[0]++;
        if (v[i][i + 1] == '#') a[0]++;
        if (v[i + 1][i + 1] == '#') a[0]++;

        if (v[i][i] == '.') a[1]++;
        if (v[i + 1][i] == '.') a[1]++;
        if (v[i][i + 1] == '.') a[1]++;
        if (v[i + 1][i + 1] == '.') a[1]++;

        if (a[0] == 3 || a[0] == 4 || a[1] == 3 || a[1] == 4) {
            flag = true;
            break;
        }
    }
    if (flag == true) cout << "YES";
    else cout << "NO";
    return 0;
}
