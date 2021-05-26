#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll modular_exponentiation (ll x, ll n, ll m) {
    if (n == 0) return 1;
    else if (n%2 == 0) return modular_exponentiation((x*x)%m, n/2, m);
    else return ( (x%m) * modular_exponentiation( ( (x%m) * (x%m) )%m, (n-1)/2, m ) ) % m;
}

int main()
{

    ll n, m; cin >> n >> m;
    ll ans = modular_exponentiation(3, n, m);
    cout << (ans - 1 + m) % m;

    return 0;
}
