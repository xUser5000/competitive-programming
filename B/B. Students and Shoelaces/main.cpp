#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef vector< set<int> > vvi;

vvi graph;

int main()
{

    int n, m; cin >> n >> m;
    graph = vvi(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].insert(b);
        graph[b].insert(a);
    }

    int cnt = 0;

    while (true) {

        set<int> s;

        for (int i = 0; i < n; i++) {
            if ((int) graph[i].size() == 1) s.insert(i);
        }

        if ((int) s.size() == 0) break;

        for (int element: s) {
            graph[ *graph[element].begin() ].erase(element);
            graph[element].clear();
        }

        cnt++;
    }

    cout << cnt;

    return 0;
}
