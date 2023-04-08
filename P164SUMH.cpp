#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll f[1001];

void process() {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        f[i] = f[i - 1] + i;
    }
}

int main()
{
    process();
    int n;
    cin >> n;
    ll ans, sum = 0, i = 1;
    while (1) {
        if (sum + f[i] <= n) {
            sum += f[i];
            i++;
        }
        else {
            ans = i - 1;
            break;
        }
    }
    cout << ans;
    return 0;
}

