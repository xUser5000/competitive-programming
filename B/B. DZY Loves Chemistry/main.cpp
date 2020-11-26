#include <bits/stdc++.h>

using namespace std;

struct DSU {

    vector<int> parent;
    unordered_map<int, int> tree_size;

    DSU (int n) {
        for (int i = 0; i < n; i++) {
            parent.push_back(i);
            tree_size[i] = 1;
        }
    }

    int leader (int node) {
        if (node == parent[node]) return node;
        return parent[node] = leader(parent[node]);
    }

    void union_sets (int node1, int node2) {
        int a = leader(node1);
        int b = leader(node2);

        if (a == b) return;

        if (tree_size[a] < tree_size[b]) swap(a, b);
        parent[b] = a;
        tree_size[a] += tree_size[b];
    }

    int get_size (int node) {
        return tree_size[leader(node)];
    }
};

typedef long long ll;

int main()
{

    int n, m; cin >> n >> m;

    if (m == 0) {
        cout << 1;
        return 0;
    }

    DSU dsu(n);
    while (m--) {
        int a, b; cin >> a >> b;
        a--, b--;
        dsu.union_sets(a, b);
    }

    ll cnt = 0;
    unordered_set<int> vis;
    for (int i = 0; i < n; i++) {
        if (vis.find( dsu.leader(i) ) == vis.end()) {
            cnt += dsu.get_size(i) - 1;
            vis.insert( dsu.leader(i) );
        }
    }

    ll ans = pow(2, cnt);
    cout << ans;

    return 0;
}
