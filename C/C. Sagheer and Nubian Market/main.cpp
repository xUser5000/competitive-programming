#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>

using namespace std;

typedef long long ll;

ll n, s;
ll arr[(int) 1e5 + 5];

ll k = 0, t = LONG_MAX;

void bs (ll l, ll r) {
    if (l <= r) {
        ll mid = (l+r) / 2;
        vector<ll> vc;
        for (ll i = 0; i < n; i++) {
            vc.push_back(arr[i] + (i+1)*mid);
        }
        sort(vc.begin(), vc.end());

        ll cost = 0;
        for (ll i = 0; i < mid; i++) cost += vc[i];

        if (cost > s) {
            bs(l, mid-1);
        } else if (cost <= s) {
            if (mid > k) {
                k = mid;
                t = cost;
            }
            if (mid == k) {
                t = min(t, cost);
            }
            bs(mid+1, r);
        }
    }
}

int main()
{

    cin >> n >> s;
    for (ll i = 0; i < n; i++) cin >> arr[i];

    bs(0, n);

    cout << k << " " << t;

    return 0;
}
