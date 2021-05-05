#include <bits/stdc++.h>

using namespace std;

typedef vector< vector<int> > vvi;

int main()
{

    int k; cin >> k;
    int n = 100;
    vvi graph = vvi(100);
    int a = 0, b = 1, c = 2;
    while (k--) {
        graph[a].push_back(b);
        graph[a].push_back(c);
        graph[b].push_back(a);
        graph[b].push_back(c);
        graph[c].push_back(a);
        graph[c].push_back(b);
        if (c == n-1) {
            if (b == n-2) {
                a++;
                b = a+1;
                c = b+1;
            } else {
                b++;
                c = b+1;
            }
        } else {
            c++;
        }
    }

    int ans[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j: graph[i]) {
            ans[i][j] = 1;
            ans[j][i] = 1;
        }
    }

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j];
        }
        cout << "\n";
    }

    return 0;
}
