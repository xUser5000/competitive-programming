#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const ll m = 1e9 + 7;
const int MAX = 1e5 + 5;

int n, k, d;

ll dp[MAX][2];
ll solve (ll sum, int f) {
    if (sum >= n) {
        if (sum == n && f == 1) return 1;
        return 0;
    }

    if (dp[sum][f] != -1) return dp[sum][f];

    ll ans = 0;

    if (f == 1) {
        for (int i = 1; i <= k; i++) {
            ans += solve(sum+i, f) % m;
        }
    } else {
        for (int i = 1; i <= k; i++) {
            ans += solve(sum+i, (i >= d)) % m;
        }
    }

    return dp[sum][f] = ans % m;
}

int main()
{

    cin >> n >> k >> d;
    memset(dp, -1, sizeof dp);
    cout << solve(0, false);

    return 0;
}
