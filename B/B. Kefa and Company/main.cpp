#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const long v = 1e5 + 7;
ll n, d;
pair<ll, ll> arr[v];
ll ans = 0;

void bs (ll index, ll l, ll r) {
    if (l <= r) {

        ll mid = (l+r) / 2;

        if (arr[mid].first - arr[index].first >= d) {
            bs(index, l, mid-1);
        } else {
            ll sum = 0;
            if (index == 0) sum = arr[mid].second;
            else sum = arr[mid].second - arr[index-1].second;

            ans = max(ans, sum);
            bs(index, mid+1, r);
        }

    }
}

int main()
{

    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        arr[i] = make_pair(a, b);
    }

    sort(arr, arr+n);

    for (int i = 1; i < n; i++) arr[i].second += arr[i-1].second;

    for (int i = 0; i < n; i++) {
        bs(i, i, n-1);
    }

    cout << (ll) ans;

    return 0;
}
