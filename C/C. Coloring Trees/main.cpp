#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MAX = 105;

ll n, m, k;
ll arr[MAX];
ll cost[MAX][MAX];
ll dp[MAX][MAX][MAX];

ll solve (ll i, ll prev, ll cnt) {

    if (i == n) {
        if (cnt == k) return 0;
        else return -1;
    }

    if (dp[i][prev][cnt] != -2) return dp[i][prev][cnt];

    if (arr[i] != -1) return solve(i+1, arr[i], cnt + !(arr[i] == prev));

    ll ans = -1;
    for (ll j = 0; j < m; j++) {
        ll res = solve(i+1, j, cnt + !(j == prev));
        ll cnt = (res == -1) ? -1 : cost[i][j] + res;
        if (cnt != -1) ans = (ans == -1) ? cnt : min(ans, cnt);
    }

    dp[i][prev][cnt] = ans;

    return ans;
}

int main()
{

    cin >> n >> m >> k;
    for (ll i = 0; i < n; i++) {
        ll a; cin >> a;
        arr[i] = a-1;
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> cost[i][j];
        }
    }

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            for (int k = 0; k < MAX; k++) {
                dp[i][j][k] = -2;
            }
        }
    }

    cout << solve(0, MAX-1, 0);

    return 0;
}
/*

4 2 1
0 0 0 2
10 30000
20000 1000000000
1000000000 50000
55 55

*/
