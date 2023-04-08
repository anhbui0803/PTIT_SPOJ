#include <bits/stdc++.h>

using namespace std;

string Erase(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            s.erase(0, i);
            break;
        }
    }
    return s;
}

int cmp(string s1, string s2) {
    if (s1.size() < s2.size()) return 1;
    else if (s1.size() == s2.size()) {
        if (s1 < s2) return 1;
        if (s1 > s2) return 0;
        if (s1 == s2) return 2;
    }
    return 0;
}

int main()
{
    int Case = 1;
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        vector<string> v;
        for (int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            temp = Erase(temp);
            v.push_back(temp);
        }
        if (n == 1) {
            cout << "Case " << Case << ":" << " There is a row of trees having equal height." << endl;
            Case++;
            continue;
        }
        string smin = v[0], smax = v[0];
        int flag = 0;
        for (int i = 1; i < n; i++) {
            if (cmp(smin, v[i]) == 0) {
                smin = v[i];
                flag = 1;
            }
            if (cmp(smax, v[i]) == 1) {
                smax = v[i];
                flag = 1;
            }
        }
        cout << "Case " << Case << ": ";
        if (flag == 0) cout << "There is a row of trees having equal height." << endl;
        else cout << smin << " " << smax << endl;
        Case++;
    }
    return 0;
}

//3
//10000000000000000000000000000000000000000000000000000000000
//013
//000001654684684313531513

