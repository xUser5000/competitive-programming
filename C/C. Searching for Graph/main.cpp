#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, p; cin >> n >> p;
        int c = 2*n + p;
        vector< vector<int> > graph = vector< vector<int> > (n);
        for (int i = 1; c > 0; i++) {
            for (int j = 0; j < n && c > 0; j++) {
                graph[j].push_back( (j+i) % n );
                c--;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j: graph[i]) cout << i+1 << " " << j+1 << "\n";
        }
    }

    return 0;
}
