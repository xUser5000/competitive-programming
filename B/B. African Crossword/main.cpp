#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < m; j++) {
            arr[i][j] = s[j];
        }
    }

    bool mark[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            mark[i][j] = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            for (int k = 0; k < m && k != j; k++) {
                if (arr[i][k] == arr[i][j]) {
                    mark[i][j] = false;
                    mark[i][k] = false;
                }
            }

            for (int k = 0; k < n && k != i; k++) {
                if (arr[k][j] == arr[i][j]) {
                    mark[i][j] = false;
                    mark[k][j] = false;
                }
            }
        }
    }

    string ans = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mark[i][j]) ans += arr[i][j];
        }
    }

    cout << ans;

    return 0;
}
