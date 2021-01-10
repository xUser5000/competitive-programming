#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

map<ll,ll> prime_factorization (ll n) {
    map<ll,ll> res;
    for (ll i = 2; i*i <= n; i++) {
        while (n%i == 0) {
            res[i]++;
            n = n/i;
        }
    }
    if (n != 1) res[n]++;
    return res;
}

vector<ll> divisors (ll n) {
    vector<ll> res;
    for (ll i = 1; i*i <= n; i++) {
        if (n%i == 0) {
            res.push_back(i);
            if (i*i != n) res.push_back(n/i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main()
{

    ll n; cin >> n;
    vector<ll> arr = divisors(n);
    ll sz = arr.size();
    ll ans = 0;
    for (int i = sz-1; i >= 0; i--) {
        map<ll,ll> mp = prime_factorization(arr[i]);
        bool f = true;
        for (auto p: mp) {
            if (p.second >= 2) f = false;
        }
        if (f) {
            ans = arr[i];
            break;
        }
    }

    cout << ans;

    return 0;
}
