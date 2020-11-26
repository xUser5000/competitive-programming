#include <iostream>

using namespace std;

typedef long long ll;

int main()
{

    ll x, y; cin >> x >> y;
    ll n; cin >> n;
    n--;

    ll a = x, b = y, c = b-a;
    ll arr[6] = {a, b, c, -a, -b, -c};

    ll v = 1e9 + 7;
    ll ans = arr[n%6];

    cout << (ans % v + v) % v;

    return 0;
}
