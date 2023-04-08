#include <bits/stdc++.h>

using namespace std;

struct Pos {
    int x, y;
};

int main()
{
    Pos A, B, C, D;
    cin >> C.x >> C.y;
    cin >> B.x >> B.y;
    cin >> D.x >> D.y;
    if (B.x == C.x) {
        A.x = D.x;
    }
    else if (B.x == D.x) {
        A.x = C.x;
    }
    else if (C.x == D.x) {
        A.x = B.x;
    }

    if (B.y == C.y) {
        A.y = D.y;
    }
    else if (B.y == D.y) {
        A.y = C.y;
    }
    else if (C.y == D.y) {
        A.y = B.y;
    }
    cout << A.x << " " << A.y;
    return 0;
}
