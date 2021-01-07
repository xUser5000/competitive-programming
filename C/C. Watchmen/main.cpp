#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    int n; cin >> n;
    pair<ll,ll> arr[n];
    for (int i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        arr[i] = {a, b};
    }

    ll ans = 0;
    map<ll,ll> mp;
    for (int i = 0; i < n; i++) {
        mp[ arr[i].first ]++;
    }
    for (auto p: mp) {
        ll cnt = p.second;
        ans += (cnt * (cnt-1)) / 2;
    }

    mp.clear();
    for (int i = 0; i < n; i++) {
        mp[ arr[i].second ]++;
    }
    for (auto p: mp) {
        ll cnt = p.second;
        ans += (cnt * (cnt-1)) / 2;
    }

    map< pair<ll,ll>, ll > cnt;
    for (int i = 0; i < n; i++) cnt[ arr[i] ]++;

    for (auto p: cnt) {
        ll x = p.second;
        ans -= (x * (x-1)) / 2;
    }

    cout << ans;

    return 0;
}
