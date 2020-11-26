#include <iostream>

using namespace std;

typedef long long ll;

int main()
{

    ll n; cin >> n;
    ll ans = 0;
    while (n--) {
        ll a; cin >> a;
        a--;
        ans += a;
    }

    cout << (ll) ans;

    return 0;
}
