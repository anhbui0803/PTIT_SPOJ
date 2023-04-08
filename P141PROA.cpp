#include <bits/stdc++.h>

using namespace std;

struct Person {
    int time;
    char ch;
};

int main()
{
    int k, n, t = 210;
    cin >> k >> n;
    Person a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].time >> a[i].ch;
    }
    for (int i = 0; i < n; i++) {
        t -= a[i].time;
        if (t <= 0) {
            cout << k;
            break;
        }
        else {
            if (a[i].ch == 'T') {
                if (k == 8) k = 1;
                else k++;
            }
        }
    }
    return 0;
}
