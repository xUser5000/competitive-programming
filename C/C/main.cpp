#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 5e3 + 5;

int n, m, k;
ll arr[MAX];
ll prefix[MAX];

ll query (ll l, ll r) {
    return (l == 0) ? prefix[r] : prefix[r] - prefix[l-1];
}

ll dp[MAX][MAX];
ll solve (int i, int k) {
    if (k == 0) return 0;
    if (i == n) return 0;

    ll &ans = dp[i][k];
    if (ans != -1) return ans;

    ans = solve(i+1, k);
    if ((n-i) / m >= k) ans = max(ans, query(i, i+m-1) + solve(i+m, k-1));

    return ans;
}

int main()
{

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) prefix[i] = prefix[i-1] + arr[i];
    memset(dp, -1, sizeof dp);
    cout << solve(0, k);
    return 0;
}
