#include <bits/stdc++.h>

using namespace std;

int n, m, q;
int arr[501][501];

int getMax (int i) {
    int ans = 0;
    int cnt = 0;
    for (int k = 0; k < m; k++) {
        if (arr[i][k] == 1) cnt++;
        else cnt = 0;
        ans = max(ans, cnt);
    }
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int row[n];
    for (int i = 0; i < n; i++) {
        row[i] = getMax(i);
    }

    while (q--) {
        int i, j; cin >> i >> j;
        i--, j--;
        arr[i][j] = !arr[i][j];
        row[i] = getMax(i);

        int ans = 0;
        for (int i = 0; i < n; i++) ans = max(ans, row[i]);

        cout << ans << "\n";
    }

    return 0;
}
