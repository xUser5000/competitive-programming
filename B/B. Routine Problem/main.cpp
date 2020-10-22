#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

ll gcd (ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

int main()
{

    ll a, b, c, d; cin >> a >> b >> c >> d;

    ll l1 = a*b*c - pow(a, 2) * d;
    ll k1 = a*b*c;

    ll l2 = a*b*d - pow(b, 2) * c;
    ll k2 = a*b*d;

    ll x, y;
    if (l1*k1 >= l2*k2) {
        x = l1;
        y = k1;
    } else {
        x = l2;
        y = k2;
    }

    ll r = gcd(y, x);
    cout << (ll) x/r << "/" << (ll) y/r;

    return 0;
}
