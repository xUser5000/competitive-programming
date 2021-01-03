#include <iostream>
#include <map>
#include <set>
#include <queue>

using namespace std;

typedef long long ll;

ll n;
map<ll,ll> depth;
set<ll> s;

ll bfs () {
    queue<ll> q;
    q.push(0);
    depth[0] = 0;

    while (!q.empty()) {
        ll node = q.front();
        q.pop();
        if (node > 0) s.insert(node);
        if ((int) s.size() > (int) 1e6) return;

        ll a = node + depth[node] + 1;
        ll b = node-1;

        if (depth.find(a) == depth.end() || depth[a] ) {
            q.push(a);
            depth[a] = depth[node] + 1;
        }

        if (depth.find(b) == depth.end()) {
            q.push(b);
            depth[b] = depth[node] + 1;
        }
    }
}

int main()
{

    int t; cin >> t;
    while (t--) {
        depth.clear();
        cin >> n;
        cout << bfs() << "\n";
    }

    return 0;
}
