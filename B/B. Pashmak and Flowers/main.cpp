#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    ll n; cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll mx = 0, mn = INT_MAX;
    map<ll,ll> mp;
    for (int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
        mp[ arr[i] ]++;
    }

    ll d = mx - mn;
    ll p;
    if (mx != mn) p = mp[mx] * mp[mn];
    else p = (mp[mx] * (mp[mx] - 1)) / 2;

    cout << d << " " << p;

    return 0;
}
