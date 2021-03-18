#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    n = min(n, m);

    vector< pair<int,int> > arr;
    for (int i = 0; i <= n; i++) {
        arr.push_back({i, n-i});
    }

    cout << n+1 << "\n";
    for (auto p: arr) cout << p.first << " " << p.second << "\n";

    return 0;
}
