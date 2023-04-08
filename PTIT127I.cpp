#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        int b[101] = {0};
        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 6; j++) {
                int temp;
                cin >> temp;
                b[temp]++;
            }
        }
        for (int i = 1; i < 50; i++) {
            if (b[i] == 0) {
                flag = false;
                break;
            }
        }
        if (flag == false) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
