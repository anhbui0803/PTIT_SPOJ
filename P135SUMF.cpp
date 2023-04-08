#include<bits/stdc++.h>
using namespace std;

main(){
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            ans += i + j;
        }
    }
    cout << ans;
    return 0;
}
