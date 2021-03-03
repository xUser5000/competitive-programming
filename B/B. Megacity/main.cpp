#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    ll n, s; cin >> n >> s;
    vector< pair<ll,ll> > arr;
    for (ll i = 0; i < n; i++) {
        ll x, y, k; cin >> x >> y >> k;
        ll z = x*x + y*y;
        arr.push_back({z, k});
    }
    sort(arr.begin(), arr.end());

    ll rem = 1e6 - s;
    ll r = 0;
    for (int i = 0; i < n && rem > 0; i++) {
        rem -= arr[i].second;
        r = arr[i].first;
    }

    if (rem > 0) {
        cout << -1;
        return 0;
    }

    cout << setprecision(8) << fixed << sqrt((double) r);

    return 0;
}
