#include <bits/stdc++.h>

using namespace std;

int change5(int x) {
    vector<int> v;
    while (x) {
        int temp = x % 10;
        if (temp == 6) temp = 5;
        v.push_back(temp);
        x /= 10;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        x = x * 10 + v[i];
    }
    return x;
}

int change6(int x) {
    vector<int> v;
    while (x) {
        int temp = x % 10;
        if (temp == 5) temp = 6;
        v.push_back(temp);
        x /= 10;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        x = x * 10 + v[i];
    }
    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;
    a = change5(a);
    b = change5(b);
    cout << a + b << " ";
    a = change6(a);
    b = change6(b);
    cout << a + b;
    return 0;
}
