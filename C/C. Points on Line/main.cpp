#include <iostream>

using namespace std;

typedef long long ll;

ll nc3 (ll n) {
    if (n < 3) return 0;
    if (n == 3) return 1;
    ll res = 1;
    for (ll i = 4; i <= n; i++) res = res * i;
    return res;
}

int main()
{

    ll n, d; cin >> n >> d;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll l = 0, r = 0;
    ll ans = 0;
    while (l < n) {
        while (r < n && arr[r] - arr[l] <= d) {
            r++;
        }
        ans += nc3(r-l+1);
        l++;
    }

    cout << ans;

    return 0;
}
