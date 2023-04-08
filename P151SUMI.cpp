#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int cntV = 0, cntI = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "Vietnam") cntV++;
        if (s == "Indonesia") cntI++;
    }
    if (cntV > cntI) cout << "Vietnam";
    else cout << "Indonesia";
    return 0;
}
