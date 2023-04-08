#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> r1;
    vector<char> r2;
    vector<char> m;
    for (int i = 0; i < n; i++) {
        char temp;
        cin >> temp;
        r1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        char temp;
        cin >> temp;
        r2.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        if (r1[i] == 'K') {
            if (r2[i] == 'K') m.push_back('B');
            if (r2[i] == 'B') m.push_back('B');
            if (r2[i] == 'G') m.push_back('K');
        }
        if (r1[i] == 'B') {
            if (r2[i] == 'K') m.push_back('B');
            if (r2[i] == 'B') m.push_back('G');
            if (r2[i] == 'G') m.push_back('G');
        }
        if (r1[i] == 'G') {
            if (r2[i] == 'K') m.push_back('K');
            if (r2[i] == 'B') m.push_back('G');
            if (r2[i] == 'G') m.push_back('K');
        }
    }
    for (int i = 0; i < n; i++) {
        cout << m[i];
    }
    return 0;
}
