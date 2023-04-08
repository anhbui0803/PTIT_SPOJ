#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Case = 1;
    while (1) {
        string a, b;
        fflush(stdin); cin >> a;
        fflush(stdin); cin >> b;
        if (a == "END" && b == "END") break;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << "Case " << Case << ": ";
        if (a.size() != b.size()) {
            cout << "different" << endl;
            Case++;
            continue;
        }
        bool flag = true;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                flag = false;
                break;
            }
        }
        if (flag == true) cout << "same" << endl;
        else cout << "different" << endl;
        Case++;
    }
    return 0;
}
