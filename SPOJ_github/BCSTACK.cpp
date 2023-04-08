#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll st[10000];
ll cnt = 0;

void init() {
    cnt = 0;
}

void push(ll n) {
    cnt++;
    st[cnt] = n;
}

void pop() {
    if (cnt > 0) cnt--;
}

void Empty() {
    if (cnt == 0) cout << 1 << endl;
    else cout << 0 << endl;
}

void top() {
    if (cnt == 0) cout << -1 << endl;
    else cout << st[cnt] << endl;
}

void Size() {
    cout << cnt << endl;
}

int main()
{
    string s;
    while (1) {
        fflush(stdin); cin >> s;
        if (s == "end") break;
        else if (s == "init") init();
        else if (s == "push") {
            ll n;
            cin >> n;
            push(n);
        }
        else if (s == "pop") pop();
        else if (s == "top") top();
        else if (s == "size") Size();
        else if (s == "empty") Empty();
    }
    return 0;
}
