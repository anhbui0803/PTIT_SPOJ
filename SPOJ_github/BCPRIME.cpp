#include <bits/stdc++.h>

using namespace std;

bool check(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (check(n) == false) cout << "NO";
    else cout << "YES";
    return 0;
}
