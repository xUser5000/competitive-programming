#include <bits/stdc++.h>

using namespace std;

const int v = 1005;

typedef long long ll;
typedef vector< vector<int> > vvi;

int n, m, k;
vvi graph;
bool vis[v];

unordered_map< int, pair<int,int> > mp;
int v_cnt, e_cnt;

void dfs (int node) {
    vis[node] = true;
    v_cnt++;
    for (int child: graph[node]) {
        e_cnt++;
        if (!vis[child]) dfs(child);
    }
}

int main()
{

    cin >> n >> m >> k;
    graph = vvi(n);
    memset(vis, false, n);
    unordered_set<int> s;
    for (int i = 0; i < k; i++) {
        int a; cin >> a;
        a--;
        s.insert(a);
    }

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int node: s) {
        v_cnt = 0;
        e_cnt = 0;
        dfs(node);
        e_cnt /= 2;
        mp[node] = make_pair(v_cnt, e_cnt);
    }

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            v_cnt = 0;
            e_cnt = 0;
            dfs(i);
            e_cnt /= 2;
            mp[i] = make_pair(v_cnt, e_cnt);
        }
    }

    ll ans = 0;
    vector<int> arr;
    for (pair< int, pair<int,int> > p: mp) {
        ll v = p.second.first;
        ll e = p.second.second;
        ans += (v * (v-1)) / 2 - e;
        if (s.find(p.first) != s.end()) arr.push_back(v);
    }

    int high = 0;
    for (int element: arr) high = max(high, element);


    for (pair< int, pair<int,int> > p: mp) {
        if (s.find(p.first) == s.end()) {
            ans += high * p.second.first;
            high += p.second.first;
        }
    }

    cout << ans;

    return 0;
}
