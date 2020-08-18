#include <iostream>
#include <map>

using namespace std;

typedef long long ll;

int main()
{

    int n; cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        mp[a] = i;
    }

    int q; cin >> q;
    ll x = 0, y = 0;

    while (q--) {

        int a; cin >> a;
        int pos = mp[a];
        x += pos;
        y += n - pos + 1;
    }

    cout << x << " " << y;

    return 0;
}
