#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{

    ll n; cin >> n;
    ll arr[n];
    ll sum1[n];

    for (ll i = 0; i < n; i++) {
        ll a; cin >> a;
        arr[i] = a;
        if (i == 0) sum1[i] = a;
        else sum1[i] = sum1[i - 1] + a;
    }

    sort(arr, arr + n);
    ll sum2[n]; sum2[0] = arr[0];
    for (ll i = 1; i < n; i++) sum2[i] = sum2[i - 1] + arr[i];

    ll q; cin >> q;
    while (q--) {
        int t, l, r; cin >> t >> l >> r;
        l--; r--;

        if (t == 1) {
            if (l == 0) printf("%lld\n", sum1[r]);
            else printf("%lld\n", sum1[r] - sum1[l - 1]);
        } else {
            if (l == 0) printf("%lld\n", sum2[r]);
            else printf("%lld\n", sum2[r] - sum2[l - 1]);
        }
    }

    return 0;
}
