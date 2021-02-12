#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
const ll m = 1e8;
const int MAX = 101;

ll n1, n2, k1, k2;

ll dp[MAX][MAX][MAX][2];
ll solve (ll rem1, ll rem2, ll cnt, ll f) {

    if (!f && cnt > k1) return 0;
    if (f && cnt > k2) return 0;
    if (rem1 == 0 && rem2 == 0) return 1;

    ll &ans = dp[rem1][rem2][cnt][f];

    if (ans != -1) return ans;

    ll a = 0, b = 0;
    if (rem1 > 0) a = solve(rem1-1, rem2, (!cnt || !f) ? cnt+1 : 1, 0) % m;
    if (rem2 > 0) b = solve(rem1, rem2-1, (!cnt || f) ? cnt+1 : 1, 1) % m;
    ans = (a + b) % m;

    return ans;
}

int main()
{

    cin >> n1 >> n2 >> k1 >> k2;
    memset(dp, -1, sizeof dp);
    cout << solve(n1, n2, 0, 0);

    return 0;
}
