#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

map<string, vector<string> > graph;
bool vis[1001] = {false};

int main()
{

    int n; cin >> n;
    graph = map< string, vector<string> >();
    for (int i = 0; i < n+1; i++) {
        string s;
        getline(cin, s);
        if (i == 0) continue;
        stringstream ss(s);
        string a;
        string prev = "";
        while (ss >> a) {
            if (prev == "") {
                prev = a;
                continue;
            }

            graph[prev].push_back(a);
            graph[a].push_back(prev);
        }
    }

    for (pair<string, vector<string> > p: graph) {
        cout << p.first << " ";
        for (string element: p.second) cout << element << " ";
        cout << endl;
    }

    return 0;
}
