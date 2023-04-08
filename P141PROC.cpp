#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;
    while (t--) {
        string s;
        fflush(stdin); cin >> s;
        if (s[1] == '+') {
            ans++;
        }
        else {
            ans--;
        }
    }
    cout << ans;
    return 0;
}
