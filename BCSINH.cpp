#include <bits/stdc++.h>

using namespace std;

//int n; bool flag = true;
//int a[10];
//
//void init() {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        a[i] = 0;
//    }
//}
//
//void print() {
//    for (int i = 0; i < n; i++) {
//        cout << a[i];
//    }
//    cout << endl;
//}
//
//void sinh() {
//    int i = n - 1;
//    while (i >= 0 && a[i] == 1) {
//        a[i] = 0;
//        i--;
//    }
//    if (i == -1) flag = false;
//    else a[i] = 1;
//}
//
//void process() {
//    while (flag) {
//        print();
//        sinh();
//    }
//}
//
//int main()
//{
//    init();
//    process();
//    return 0;
//}

int n, a[15];

void print() {
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n) print();
        else Try(i + 1);
    }
}

int main() {
    cin >> n;
    Try(1);
    return 0;
}
