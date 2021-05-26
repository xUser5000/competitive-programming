#include <bits/stdc++.h>

using namespace std;

const int MAX = 5e5 + 5;
typedef vector< vector<int> > vvi;

int n, m;
vvi graph;
string s;

int main()
{

    cin >> n >> m;
    graph = vvi(n);
    for (int i = 1; i < n; i++) {
        int a; cin >> a; a--;
        graph[a].push_back(i);
    }
    cin >> s;

    return 0;
}
