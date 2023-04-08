#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int n, m, f[705][705], dd[705][705], ans = 0;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void BFS(int i, int j) {
    int ok = 1;
    queue<pair<int, int>> q;
    q.push({i, j});
    dd[i][j] = 1;
    while (q.size()) {
        i = q.front().X, j = q.front().Y;
        q.pop();
        for (int k = 0; k < 8; k++) {
            int u = i + dx[k], v = j + dy[k];
            if (u < 1 || u > n || v < 1 || v > n) continue;
            if (f[u][v] == f[i][j] && dd[u][v] == 0) {
                dd[u][v] = 1;
                q.push({u, v});
            }
            if (f[u][v] > f[i][j]) ok = 0;
        }
    }
    ans += ok;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> f[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (dd[i][j] == 0) {
                BFS(i, j);
            }
        }
    }
    cout << ans;
    return 0;
}
