#include <bits/stdc++.h>

using namespace std;

int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
char p1, p2;
int x1, x2, y1, y2, ans;

void bfs(int x1, int y1, int x2, int y2) {

    // Inner pair là tọa độ của điểm đi đến
    // Outer pair là số bước đi đến tọa độ cần đến
    queue<pair<pair<int, int>>, int> q;
    q.push({{x1, y1}, 0});
    while (q.size()) {
        pair<pair<int, int>, int> p = q.front();
        q.pop();
        int i = p.first.first;
        int j = p.first.second;
        if (i == x2 && j == y2) {
            ans = p.second;
            return ;
        }
        for (int k = 0; k < 8; k++) {
            int u = i + dx[k];
            int v = j + dy[k];
            int z = p.second + 1;
            if (u < 1 || u > 8 || v < 1 || v > 8) continue;
            q.push({{u, v}, z);
        }
    }
}

void process() {
    ans = 0;
    cin >> p1 >> y1 >> p2 >> y2;
    x1 = p1 - 'a' + 1;
    x2 = p2 - 'a' + 1;
    bfs(x1, y1, x2, y2);
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        process();
    }
    return 0;
}
