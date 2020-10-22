#include <iostream>
#include <cstring>

using namespace std;

const int v = 55;

int n, m;
char arr[v][v];
bool vis[v][v];

int v_cnt, e_cnt;

bool valid (pair<int,int> p) {
    return p.first >= 0 && p.first < n && p.second >= 0 && p.second < m;
}

int di[] = {0, 0, 1, -1};
int dj[] = {-1, 1, 0, 0};
void dfs (pair<int,int> node) {
    v_cnt++;
    vis[node.first][node.second] = true;

    for (int k = 0; k < 4; k++) {
        int a = node.first + di[k];
        int b = node.second + dj[k];
        if (valid({a, b}) && arr[node.first][node.second] == arr[a][b]) {
            e_cnt++;
            if (!vis[a][b]) dfs({a, b});
        }
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j]) {
                v_cnt = 0;
                e_cnt = 0;
                dfs({i, j});
                e_cnt = e_cnt / 2;
                if (e_cnt != v_cnt - 1) {
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }

    cout << "No";

    return 0;
}
