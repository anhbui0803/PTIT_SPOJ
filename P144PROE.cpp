#include <bits/stdc++.h>

using namespace std;

struct Coin {
    int p, q;
    Coin(int temp1, int temp2) {
        p = temp1;
        q = temp2;
    }
};

int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<Coin> v;
    for (int i = a; i <= x; i++) {
        for (int j = b; j < i && j <= y; j++) {
            v.push_back(Coin(i, j));
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].p << " " << v[i].q << endl;
    }
    return 0;
}


