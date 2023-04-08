#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int temp1 = 0, temp2 = 0;
    for (int i = 0; i < a.size(); i++) {
        bool flag = false;
        for (int j = 0; j < b.size(); j++) {
            if (b[j] == a[i]) {
                temp1 = i;
                temp2 = j;
                flag = true;
                break;
            }
        }
        if (flag == true) break;
    }
    for (int i = 0; i < b.size(); i++) {
        if (i == temp2) cout << a;
        else {
            for (int j = 0; j < a.size(); j++) {
                if (j == temp1) cout << b[i];
                else cout << '.';
            }
        }
        cout << endl;
    }
    return 0;
}
