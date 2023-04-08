#include <bits/stdc++.h>

using namespace std;

//int main()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i = 0; i < n; i++) {
//        a[i] = i + 1;
//    }
//    do {
//        for (int i = 0; i < n; i++) {
//            cout << a[i];
//        }
//        cout << endl;
//    } while (next_permutation(a, a + n) == true);
//    return 0;
//}

int n, a[10];
bool flag = true;

void init() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void print() {
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

void sinh() {
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1])
        i--;
    if (i == 0) flag = false;
    else {
        int k = n;
        while (a[i] > a[k])
            k--;
        swap(a[i], a[k]);
        int l = i + 1, r = n;
        while (l < r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}

void process() {
   while (flag) {
        print();
        sinh();
   }
}

int main() {
    init();
    process();
    return 0;
}

































