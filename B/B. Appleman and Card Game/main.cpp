#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    ll n, k; cin >> n >> k;
    map<char,ll> mp;
    string s; cin >> s;
    for (ll i = 0; i < n; i++) mp[s[i]]++;

    vector<ll> arr;
    for (pair<ll,ll> p: mp) arr.push_back(p.second);
    sort(arr.rbegin(), arr.rend());

    ll ans = 0;
    for (ll element: arr) {
        if (element >= k) {
            ans += k * k;
            break;
        }

        ans += element * element;
        k -= element;
    }

    cout << ans;

    return 0;
}
