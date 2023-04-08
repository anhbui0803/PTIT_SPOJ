#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n / 2;
    for (int i = 0; i < (n / 2) + 1; i++) {
        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        for (int j = 0; j < n - k * 2; j++) {
            cout << "D";
        }
        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        k--;
        cout << endl;
    }
    k += 2;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        for (int j = 0; j < n - k * 2; j++) {
            cout << "D";
        }
        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        k++;
        cout << endl;
    }
    return 0;
}
