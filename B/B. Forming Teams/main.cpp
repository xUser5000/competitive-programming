#include <bits/stdc++.h>

using namespace std;
typedef vector< vector<int> > vvi;
const int MAX = 101;

int n, m;
vvi graph;
int timer[MAX];

int ans = 0;

void dfs (int node, int parent, int cnt) {
    timer[node] = cnt;
    for (int child: graph[node]) {
        if (child == parent) continue;

        if (timer[child] == -1) dfs(child, node, cnt+1);
        else {
            int length = timer[node] - timer[child] + 1;
            if (length > 2 && length % 2 == 1) ans++;
        }
    }
}

int main()
{

    cin >> n >> m;
    graph = vvi(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    memset(timer, -1, sizeof timer);
    for (int i = 0; i < n; i++) {
        if (timer[i] == -1) dfs(i, -1, 0);
    }

    if ((n - ans) % 2 == 1) ans++;
    cout << ans;

    return 0;
}
