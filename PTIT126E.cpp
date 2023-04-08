#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (1) {
        string s;
        cin >> s;
        if (s == "#") {
            break;
        }
        int cntA = 0, cntY = 0, cntN = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'N') {
                cntN++;
            }
            if (s[i] == 'Y') {
                cntY++;
            }
            if (s[i] == 'A') {
                cntA++;
            }
        }
        if ((float)cntA >= (float)s.size() / 2.0) {
            cout << "need quorum" << endl;
        }
        else {
            if (cntY > cntN) {
                cout << "yes" << endl;
            }
            else if (cntY == cntN) {
                cout << "tie" << endl;
            }
            else {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}
