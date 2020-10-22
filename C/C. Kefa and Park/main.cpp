#include <bits/stdc++.h>

using namespace std;

typedef vector< vector<int> > vvi;

const int v = 2e5 + 3;

int n, m;
vvi graph;
set<int> s;
bool vis[v];
int ans = 0;

void dfs (int node, int cnt) {
    vis[node] = true;

    if (s.find(node) == s.end()) cnt = 0;
    else cnt++;

    if (cnt > m) return;

    bool f = false;
    for (int child: graph[node]) {
        if (!vis[child]) {
            dfs(child, cnt);
            f = true;
        }
    }
    if (!f) ans++;
}

int main()
{

    cin >> n >> m;
    graph = vvi(n);
    memset(vis, false, n);
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == 1) s.insert(i);
    }

    for (int i = 0; i < n-1; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(0, 0);

    cout << ans;

    return 0;
}
