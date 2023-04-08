#include <bits/stdc++.h>

using namespace std;

int f[10005] = {0};
int a, b;
int dd[10005] = {0};
int dem[10005] = {0};
vector<int> prime;
vector<int> ke[10005];

// Reset after each test case
void reset() {
    for (int i = 0; i < 10005; i++) {
        dd[i] = 0;
        dem[i] = 0;
    }
}

// Store prime numbers in vector prime for later use
void snt() {
   f[0] = 1;
   f[1] = 1;
   for (int i = 2; i <= sqrt(10005); i++) {
        if (f[i] == 0) {
            for (int j = i * i; j < 10005; j += i) {
                f[j] = 1;
            }
        }
   }
   for (int i = 1000; i < 10000; i++) {
        if (f[i] == 0) {
            prime.push_back(i);
        }
   }
}
// Check whether a can transform into b or not
bool check(int a, int b) {
    string temp1, temp2;
    stringstream ss1, ss2;
    ss1 << a;
    ss1 >> temp1;
    ss2 << b;
    ss2 >> temp2;
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (temp1[i] == temp2[i]) cnt++;
    }
    if (cnt == 3) return true;
    return false;
}

void init_BFS() {
    for (int i = 0; i < prime.size() - 1; i++) {
        for (int j = i + 1; j < prime.size(); j++) {
            if (check(prime[i], prime[j])) {
                ke[prime[i]].push_back(prime[j]);
                ke[prime[j]].push_back(prime[i]);
            }
        }
    }
}

void BFS() {
    queue<int> q;
    q.push(a);
    dd[a] = 1;
    while (q.size()) {
        int u = q.front(); q.pop();
        for (int i = 0; i < ke[u].size(); i++) {
            int v = ke[u][i];
            if (dd[v] == 0) {
                q.push(v);
                dd[v] = 1;
                dem[v] = dem[u] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    snt();
    init_BFS();
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        BFS();
        cout << dem[b] << endl;
        reset();
    }
    return 0;
}
