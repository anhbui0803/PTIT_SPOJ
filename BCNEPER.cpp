#include <bits/stdc++.h>

using namespace std;

using ll = long long;

//int main()
//{
//    int t;
//    cin >> t;
//    for (int i = 1; i <= t; i++) {
//        vector<int> v;
//        int n;
//        string s;
//        cin >> n >> s;
//        int k = s.size();
//        for (int j = 0; j < k; j++) {
//            int temp = s[j] - 48;
//            v.push_back(temp);
//        }
//        cout << i << " ";
//        if (next_permutation(v.begin(), v.end()) == false) cout << "BIGGEST";
//        else {
//            for (int j = 0; j < k; j++) {
//                cout << v[j];
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}

int n, k, a[85];
string s;
bool flag = true;

void init() {
    flag = true;
    cin >> n >> s;
    k = s.size();
    for (int i = 1; i <= k; i++) {
        int tmp = s[i - 1] - 48;
        a[i] = tmp;
    }
}

void sinh() {
    int i = k - 1;
    while (i > 0 && a[i] >= a[i + 1])
        i--;
    if (i == 0) flag = false;
    else {
        int temp = k;
        while (a[i] >= a[temp])
            temp--;
        swap(a[temp], a[i]);
        sort(a + i + 1, a + k + 1);
    }
}

void print() {
    cout << n << " ";
    if (flag) {
        for (int i = 1; i <= k; i++)
            cout << a[i];
    }
    else {
        cout << "BIGGEST";
    }
    cout << endl;
}

void process() {
    sinh();
    print();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
    return 0;
}
























