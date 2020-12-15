#include <iostream>

using namespace std;

typedef long long ll;

ll n, t;
ll ans = 0;

void bs (ll index, ll l, ll r, ll arr[]) {
    if (l <= r) {
        ll mid = (l+r) / 2;
        ll sum = 0;
        if (index == 0) sum = arr[mid];
        else sum = arr[mid] - arr[index-1];

        if (sum <= t) {
            ans = max(ans, mid-index+1);
            bs(index, mid+1, r, arr);
        } else {
            bs(index, l, mid-1, arr);
        }
    }
}

int main()
{

    cin >> n >> t;
    ll arr[n];
    for (ll i = 0; i < n; i++) cin >> arr[i];
    for (ll i = 1; i < n; i++) arr[i] += arr[i-1];

    for (ll i = 0; i < n; i++) {
        bs(i, i, n-1, arr);
    }

    cout << ans;

    return 0;
}
