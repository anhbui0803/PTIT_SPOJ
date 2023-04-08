#include <bits/stdc++.h>

using namespace std;

struct Person {
    string fname, sname;
    int birthAge, sonAge;
};

bool cmp(Person ps1, Person ps2) {
    if (ps1.sonAge > ps2.sonAge) return true;
    else if (ps1.sonAge == ps2.sonAge) {
        if (ps1.sname < ps2.sname) return true;
    }
    return false;
}

Person a[200];
int n;

void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].fname >> a[i].sname >> a[i].birthAge;
    }
}

void recursion(string Fname, int Fage) {
    for (int i = 0; i < n; i++) {
        if (Fname == a[i].fname) {
            if (Fname == "Ted") {
                a[i].sonAge = 100 - a[i].birthAge;
                recursion(a[i].sname, a[i].sonAge);
            }
            else {
                a[i].sonAge = Fage - a[i].birthAge;
                recursion(a[i].sname, a[i].sonAge);
            }
        }
    }
}

int main()
{
    int t, Case = 1;
    cin >> t;
    while (t--) {
        init();
        recursion("Ted", 0);
        sort(a, a + n, cmp);
        cout << "DATASET " << Case << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i].sname << " " << a[i].sonAge << endl;
        }
        Case++;
    }
    return 0;
}
