#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0, j = n - 1, ti = 0, teo = 0;
    while (i < j) {
        if (i == j - 2) {
            if (a[i] <= a[j]) {
                ti += 2;
                teo++;
                break;
            }
            else if (a[i] > a[j]) {
                teo += 2;
                ti++;
                break;
            }
        }
        else if (i == j - 1) {
            ti++;
            teo++;
            break;
        }
        else {
            if (a[i] == a[j]) {
                ti++;
                teo++;
                i++;
                j--;
            }
            else if (a[i] < a[j]) {
                ti++;
                a[j] -= a[i];
                i++;
            }
            else {
                teo++;
                a[i] -= a[j];
                j--;
            }
        }
    }
    if (n == 1) {
        cout << 1 << " " << 0;
    }
    else {
        cout << ti << " " << teo;
    }
    return 0;
}
