#include <bits/stdc++.h>

using namespace std;

const int MAX = 5001;
typedef long long ll;

int n;
ll a[MAX], b[MAX];

ll dp[MAX][MAX][2];
ll solve (int l, int r, int f) {
    if (l == r) return a[l] * b[l];
    if (l > r) return 0;

    ll &ans = dp[l][r][f];
    if (ans != -1) return ans;

    ans = 0;
    if (f == 0) {
        ans = max(
            a[l]*b[l] + solve(l+1, r, 0),
            a[r]*b[r] + solve(l, r-1, 0)
        );
        ans = max(ans, solve(l, r, 1));
    } else {
        ans = a[l]*b[r] + a[r]*b[l] + solve(l+1, r-1, 1);
    }

    return ans;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    memset(dp, -1, sizeof dp);
    cout << solve(0, n-1, 0);
    return 0;
}
