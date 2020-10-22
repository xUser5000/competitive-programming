#include <iostream>
#include <unordered_map>

using namespace std;

typedef long long ll;

int main()
{

    freopen("shakehand.in", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        unordered_map<ll,ll> mp;
        while (n--) {
            ll q; cin >> q;
            while (q--) {
                ll a; cin >> a;
                mp[a]++;
            }
        }
        ll ans = 0;
        for (pair<ll,ll> p: mp) {
            ll cnt = p.second;
            ans += (cnt * (cnt-1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
