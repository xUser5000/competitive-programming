#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector< vector<int> > vvi;

const ll oo = 1e18;
const int MAX = 1e5 + 5;
const ll M = 1e9 + 7;

int n, m;
ll cost[MAX];
vvi graph, comps;
int timer[MAX], low[MAX];
stack<int> stk;
bool instack[MAX];

int cnt;
void dfs (int node) {
    timer[node] = low[node] = cnt++;
    stk.push(node);
    instack[node] = true;
    for (int child: graph[node]) {
        if (timer[child] == -1) {
            dfs(child);
            low[node] = min(low[node], low[child]);
        } else if (instack[child]) {
            low[node] = min(low[node], timer[child]);
        }
    }

    if (low[node] == timer[node]) {
        int x = -1;
        comps.push_back(vector<int>());
        while (x != node) {
            x = stk.top(); stk.pop();
            instack[x] = false;
            comps.back().push_back(x);
        }
    }
}

int main()
{

    cin >> n;
    graph = vvi(n);
    memset(timer, -1, sizeof timer);
    memset(low, -1, sizeof low);
    memset(instack, false, sizeof instack);
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        cost[i] = a;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
    }

    for (int i = 0; i < n; i++) {
        if (timer[i] == -1) dfs(i);
    }

    vector< pair<int,int> > ans;
    for (vector<int> vc: comps) {
        ll lowest = oo, cnt = 0;
        for (int i: vc) {
            if (cost[i] < lowest) {
                lowest = cost[i];
                cnt = 1;
            } else if (cost[i] == lowest) cnt++;
        }
        ans.push_back({lowest, cnt});
    }

    ll a = 0, b = 1;
    for (pair<int,int> p: ans) {
        a += p.first;
        b = (b * (p.second%M) ) % M;
    }

    cout << a << " " << b;

    return 0;
}
