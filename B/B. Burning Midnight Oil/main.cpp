#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

ll f (ll v, ll k) {

    ll sum = v;
    ll p = 1;

    while (v >= pow(k, p)) {
        sum += v / pow(k, p);
        p++;
    }

    return sum;

}

ll bs (ll l, ll r, ll n, ll k) {

    while (l <= r) {

        ll mid = (r + l) / 2;

        ll f_mid = f(mid, k);

        if (n == f_mid) return mid;
        else if (n > f_mid) l = mid + 1;
        else {
            if (f(mid - 1, k) < n) return mid;
            else r = mid - 1;
        }

    }

    return -1;

}

int main()
{

    ll n, k; cin >> n >> k;

    cout << bs(0, 10e9, n, k);

    return 0;
}
