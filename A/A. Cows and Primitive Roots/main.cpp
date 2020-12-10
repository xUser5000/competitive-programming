#include <iostream>

using namespace std;

typedef long long ll;

ll me (ll x, ll n, ll m) {
    if (n == 0) return 1;
    if (n%2 == 0) return me( (x*x)%m, n/2, m );
    return (x * me( (x*x)%m, (n-1)/2, m ) ) % m;
}

int main()
{

    ll p; cin >> p;
    ll ans = 0;
    for (ll x = 1; x < p; x++) {
        bool f = false;
        for (ll j = 1; j <= p-2; j++) {
            ll res = me(x, j, p);
            if ((res-1) % p == 0) {
                f = true;
                break;
            }
        }
        if (!f && (me(x, p-1, p) - 1) % p == 0) ans++;
    }

    cout << ans;

    return 0;
}
