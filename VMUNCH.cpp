#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int row, col;
int dd[105][105];
char f[105][105];
pair<int, int> B;
pair<int, int> C;
map<pair<int, int>, int> res;

void BFS(pair<int, int> C) {
    queue<pair<int, int>> q;
    q.push(C);
    dd[C.X][C.Y] = 1;
    res[C] = 1;
    bool found = false;
    while (q.size() && !found) {
        pair<int, int> temp = q.front(); q.pop();
        for (int k = 0; k < 4; k++) {
            int x = temp.X + dx[k];
            int y = temp.Y + dy[k];
            pair<int, int> tmp = {x, y};
            if (x < 1 || x > row || y < 1 || y > col || dd[x][y] || f[x][y] == '*') {
                continue;
            }
            if (tmp == B) {
                res[B] = res[temp];
                found = true;
                break;
            }
            dd[x][y] = 1;
            q.push(tmp);
            res[tmp] = res[temp] + 1;
        }
    }
    cout << res[B];
}

int main()
{
    cin >> row >> col;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            cin >> f[i][j];
            if (f[i][j] == 'B') B = {i, j};
            else if (f[i][j] == 'C') C = {i, j};
        }
    }
    BFS(C);
    return 0;
}
