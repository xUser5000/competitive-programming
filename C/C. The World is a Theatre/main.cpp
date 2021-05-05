#include <iostream>

using namespace std;

typedef __int128 ll;

ll fact (ll n) {
    ll ans = 1;
    for (ll i = 2; i <= n; i++) ans = ans * i;
    return ans;
}

ll c (ll n, ll r) {
    return fact(n) / fact(r) / fact(n-r);
}

int main()
{

    ll n, m, t; cin >> n >> m >> t;

    ll ans = 0;
    for (int i = 4; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i + j != t) continue;
            ans += c(n, i) * c(m, j);
        }
    }

    cout << ans;

    return 0;
}
