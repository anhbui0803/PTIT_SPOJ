#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++ ){
        int n, a[8] = {0};
        string s;
        cin >> n >> s;
        int k = s.size();
        for (int j = 0; j < k - 2; j++) {
            string temp = s.substr(j, 3);
            if (temp == "TTT") a[0]++;
            else if (temp == "TTH") a[1]++;
            else if (temp == "THT") a[2]++;
            else if (temp == "THH") a[3]++;
            else if (temp == "HTT") a[4]++;
            else if (temp == "HTH") a[5]++;
            else if (temp == "HHT") a[6]++;
            else if (temp == "HHH") a[7]++;
        }
        cout << i << " ";
        for (int j = 0; j < 8; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
