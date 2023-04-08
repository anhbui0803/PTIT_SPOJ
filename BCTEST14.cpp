#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll a, b, v;
    cin >> a >> b >> v;
    ll temp = ceil((double)(v - a) / (a - b));
    cout << temp + 1;
    return 0;
}
