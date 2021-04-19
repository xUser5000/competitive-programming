#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 101;
const ll no = -1e18;
const ll M = 1e9 + 7;

int n, k, d;

ll dp[MAX][2];
ll solve (int rem, int f) {
    //cout << rem << "\n";
    if (rem == 0 && f == 1) return 1;
    if (rem < 0) return no;

    ll &ans = dp[rem][f];
    if (ans != -1) return ans;

    ans = 0;
    for (ll i = 1; i <= k; i++) {
        ll res = (i >= d) ? solve(rem-i, 1) : solve(rem-i, f);
        if (res != no) ans = (ans + res) % M;
    }

    return ans;
}

int main()
{

    cin >> n >> k >> d;
    memset(dp, -1, sizeof dp);
    cout << solve(n, 0);

    return 0;
}
