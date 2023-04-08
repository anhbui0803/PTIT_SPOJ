#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (1) {
        string s;
        fflush(stdin); getline(cin, s);
        if (s == ".") break;
        else {
            vector<int> vi;
            vector<string> vs;
            string str = "";
            int k = 0, sign = 1, temp = 0, a[10000] = {0};
            bool flag = false;
            for (int i = 0; i < s.size(); i++) {
                for (int j = i; j < s.size(); j++) {
                    if (s[j] == '-') {
                        sign = -1;
                        continue;
                    }
                    if (s[j] >= '0' && s[j] <= '9') {
                        k = k * 10 + (s[j] - 48);
                        flag = true;
                    }
                    else if (s[j] >= 'a' && s[j] <= 'z') {
                        str += s[j];
                    }
                    else {
                        i = j + 1;
                        break;
                    }
                }
                if (flag == true) {
                    vi.push_back(k * sign);
                    sign = 1;
                    k = 0;
                    a[temp] = -1;
                    temp++;
                    flag = false;
                }
                else {
                    vs.push_back(str);
                    str = "";
                    a[temp] = 1;
                    temp++;
                }
            }
            sort(vi.begin(), vi.end());
            sort(vs.begin(), vs.end());
            int it1 = 0, it2 = 0;
            for (int i = 0; i < temp; i++) {
                if (a[i] == -1) {
                    cout << vi[it1];
                    it1++;
                } else {
                    cout << vs[it2];
                    it2++;
                }
                if (i < temp - 1) cout << ", ";
                else cout << ".";
            }
        cout << endl;
        }
    }
    return 0;
}



