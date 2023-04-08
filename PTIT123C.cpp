#include <bits/stdc++.h>

using namespace std;

struct CK {
    int day, price;
};

bool cmp(CK t1, CK t2) {
    if (t1.price < t2.price) return true;
    else if (t1.price == t2.price) {
        if (t1.day < t2.day) return true;
    }
    return false;
}

bool cmp1(CK t1, CK t2) {
    if (t1.day < t2.day) return true;
    return false;
}

bool cmp2(CK t1, CK t2) {
    if (t1.day > t2.day) return true;
    return false;
}

int main()
{
    int Case = 1;
    while (1) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        if (n == 0 && k1 == 0 && k2 == 0) break;
        CK a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].price;
            a[i].day = i + 1;
        }
        sort(a, a + n, cmp);
        sort(a, a + k1, cmp1);
        sort(a + (n - k2), a + n, cmp2);
        cout << "Case " << Case << endl;
        Case++;
        for (int i = 0; i < k1; i++) {
            cout << a[i].day << " ";
        }
        cout << endl;
        for (int i = n - k2; i < n; i++) {
            cout << a[i].day << " ";
        }
        cout << endl;
    }
    return 0;
}
