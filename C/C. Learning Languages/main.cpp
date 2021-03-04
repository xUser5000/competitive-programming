#include <bits/stdc++.h>

using namespace std;

typedef vector< vector<int> > vvi;
const int MAX = 101;

int n, m;
vvi graph;
bool vis[MAX];

void dfs (int node) {
    vis[node] = true;
    for (int child: graph[node]) {
        if (!vis[child]) dfs(child);
    }
}

int main()
{

    cin >> n >> m;
    graph = vvi(n);
    map< int, vector<int> > mp;
    int cnt[n];
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        cnt[i] = a;
        for (int j = 0; j < a; j++) {
            int x; cin >> x; x--;
            mp[x].push_back(i);
        }
    }

    for (auto p: mp) {
        vector<int> arr = p.second;
        for (int i = 1; i < (int) arr.size(); i++) {
            graph[ arr[0] ].push_back(arr[i]);
            graph[ arr[i] ].push_back(arr[0]);
        }
    }

    memset(vis, false, sizeof vis);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            ans++;
            dfs(i);
        }
    }

    bool f = true;
    for (int i = 0; i < n; i++) {
        if (cnt[i] != 0) {
            f = false;
            break;
        }
    }

    cout << ans-1+f;

    return 0;
}
