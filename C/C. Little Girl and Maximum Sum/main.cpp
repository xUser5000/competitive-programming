#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    int n, q; cin >> n >> q;
    multiset<ll> s;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        s.insert(a);
    }
    ll queries[n+5];
    memset(queries, 0, sizeof queries);
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        l--; r--;
        queries[l]++;
        queries[r+1]--;
    }
    for (int i = 1; i < n; i++) queries[i] += queries[i-1];
    map<ll,ll> mp;
    for (int i = 0; i < n; i++) mp[ queries[i] ]++;
    ll ans = 0;
    for (pair<ll,ll> p: mp) {
        int a = p.first, b = p.second;
        while (b--) {
            ans += *s.begin() * a;
            s.erase(s.begin());
        }
    }

    cout << ans;

    return 0;
}
