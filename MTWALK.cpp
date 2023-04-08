#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int f[105][105];
int dd[105][105];
int n, maxz, minz;

bool BFS(int del) {
    for (int l = minz; l <= maxz - del; l++) {
        int r = l + del;
        if (f[1][1] < l || f[1][1] > r) continue;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dd[i][j] = 0;
            }
        }
        dd[1][1] = 1;
        queue<pair<int, int>> q;
        q.push({1, 1});
        while (!q.empty()) {
            int i = q.front().first, j = q.front().second;
            q.pop();
            if (i == n && j == n) return true;
            for (int k = 0; k < 4; k++) {
                int u = i + dx[k], v = j + dy[k];
                if (u < 1 || u > n || v < 1 || v > n) continue;
                if (f[u][v] < l || f[u][v] > r || dd[u][v]) continue;
                dd[u][v] = 1;
                q.push({u, v});
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    maxz = 0;
    minz = 1000;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> f[i][j];
            maxz = max(maxz, f[i][j]);
            minz = min(minz, f[i][j]);
        }
    }
    int l = 0, r = maxz - minz, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (BFS(mid)) {
            ans = mid, r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
