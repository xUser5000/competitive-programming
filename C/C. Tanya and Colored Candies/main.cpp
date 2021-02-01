#include <iostream>
#include <cstring>

using namespace std;

int n, s, k;
int candies[55];
int color[55];

bool vis[55][4][2005];
int dp[55][4][2005];
int solve (int i, int prev, int rem) {
    printf("%d %d %d\n", i, prev, rem);
    if (rem <= 0) return 0;
    if (candies[i] == 0) return 55;
    vis[i][prev][rem] = true;

    if (dp[i][prev][rem] != -1) return dp[i][prev][rem];

    int ans = 55;


    if (i + 1 < n) {
        if (!vis[i+1][prev][rem]) ans = min(ans, 1 + solve(i+1, prev, rem));

        if (candies[i] != 0 && color[i] != prev) {
            int tmp = candies[i];
            candies[i] = 0;
            if (!vis[i+1][color[i]][rem-tmp]) ans = min(ans, 1 + solve(i+1, color[i], rem - tmp));
            candies[i] = tmp;
            vis[i+1][color[i]][rem-tmp] = false;
        }
    }

    if (i - 1 >= 0) {
        if (!vis[i-1][prev][rem]) ans = min(ans, 1 + solve(i-1, prev, rem));

        if (candies[i] != 0 && color[i] != prev) {
            int tmp = candies[i];
            candies[i] = 0;
            if (!vis[i-1][color[i]][rem-tmp]) ans = min(ans, 1 + solve(i-1, color[i], rem - tmp));
            candies[i] = tmp;
            vis[i-1][color[i]][rem-tmp] = false;
        }
    }

    dp[i][prev][rem] = ans;
    return ans;
}

int main()
{

    cin >> n >> s >> k;
    for (int i = 0; i < n; i++) cin >> candies[i];
    for (int i = 0; i < n; i++) {
        char ch; cin >> ch;
        if (ch == 'R') color[i] = 0;
        if (ch == 'G') color[i] = 1;
        if (ch == 'B') color[i] = 2;
    }

    memset(vis, false, sizeof vis);
    memset(dp, -1, sizeof dp);

    int ans = solve(s-1, 3, k);

    if (ans >= 55) cout << -1;
    else cout << ans;

    return 0;
}

/*

6 1 21
4 2 3 5 1 6
RGBGRB

*/
