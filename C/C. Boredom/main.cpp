#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;

typedef long long ll;

ll n;
ll cnt[MAX];

ll high = 0;

ll dp[MAX];

ll solve (ll i) {
    if (i > high) return 0;

    if (dp[i] != -1) return dp[i];

    ll ans = 0;
    ll a = i*cnt[i] + solve(i+2);
    ll b = solve(i+1);
    ans = max(a, b);

    dp[i] = ans;

    return ans;
}

int main()
{


    cin >> n;
    memset(cnt, 0, sizeof cnt);
    memset(dp, -1, sizeof dp);
    for (ll i = 0; i < n; i++) {
        ll a; cin >> a;
        cnt[a]++;
        high = max(high, a);
    }

    cout << solve(1);

    return 0;
}
