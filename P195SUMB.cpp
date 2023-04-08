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
    int i = 0, j = n - 1, harley = 0, levi = 0;
    while (i < j) {
        if (i == j - 2) {
            if (a[i] <= a[j]) {
                harley += 2;
                levi++;
                break;
            }
            else if (a[i] > a[j]) {
                levi += 2;
                harley++;
                break;
            }
        }
        else if (i == j - 1) {
            harley++;
            levi++;
            break;
        }
        else {
            if (a[i] == a[j]) {
                harley++;
                levi++;
                i++;
                j--;
            }
            else if (a[i] < a[j]) {
                harley++;
                a[j] -= a[i];
                i++;
            }
            else {
                levi++;
                a[i] -= a[j];
                j--;
            }
        }
    }
    if (n == 1) {
        cout << 1 << " " << 0;
    }
    else {
        cout << harley << " " << levi;
    }
    return 0;
}
