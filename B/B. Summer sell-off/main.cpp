#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{

    ll n, f; cin >> n >> f;
    vector< pair<ll,ll> > vc;
    for (ll i = 0; i < n; i++) {
        ll k, l; cin >> k >> l;
        ll a = min(l, 2 * k) - min(l, k);
        ll b = min(l, k);
        vc.push_back( make_pair(a, b) );
    }

    sort(vc.begin(), vc.end());

    ll x = 0;

    for (ll i = n - 1; i >= 0; i--) {
        pair<ll, ll> p = vc[i];
        ll a = p.first;
        ll b = p.second;

        if (f > 0) {
            x += a + b;
            f--;
        } else {
            x += b;
        }
    }

    cout << x;

    return 0;
}
