#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;
typedef vector< vector<int> > vvi;

int n;
vvi graph;
bool vis[MAX];
bool color[MAX];

void dfs (int node, bool prev) {
    vis[node] = 1;
    color[node] = !prev;
    for (int child: graph[node]) {
        if (!vis[child]) {
            dfs(child, color[node]);
        }
    }
}

int main()
{
    cin >> n;
    graph = vvi(n);
    for (int i = 0; i < n-1; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    memset(vis, false, sizeof vis);
    dfs(0, 0);
    long long a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (color[i]) a++;
        else b++;
    }

    cout << a*b - (n-1);

    return 0;
}
