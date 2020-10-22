#include <bits/stdc++.h>

using namespace std;

const int v = 1e5 + 9;

int n;
unordered_map<int,int> jump;
unordered_map<int,int> depth;

void init () {
    jump.clear();
    depth.clear();
}

bool valid (int node) {
    return depth.find(node) == depth.end() && node < n && node >= 0;
}

void bfs () {
    queue<int> q;
    q.push(n-1);
    depth[n-1] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        int a = node + jump[node];
        int b = node - jump[node];

        if (valid(a)) {
            depth[a] = depth[node] + 1;
            q.push(a);
        }
        if (valid(b)) {
            depth[b] = depth[node] + 1;
            q.push(b);
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("jumping.in", "r", stdin);

    int t; cin >> t;
    while (t--) {
        init();
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            jump[i] = a;
        }

        bfs();
        for (int i = 0; i < n; i++) {
            if (depth.find(i) == depth.end()) cout << -1;
            else cout << depth[i];
            cout << "\n";
        }
    }

    return 0;
}
