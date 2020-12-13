#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{

    ll a, b, c; cin >> a >> b >> c;
    ll m; cin >> m;
    pair<ll,string> arr[m];
    for (int i = 0; i < m; i++) {
        ll a; cin >> a;
        string s; cin >> s;
        arr[i] = {a, s};
    }

    sort(arr, arr+m);

    ll n = 0, cost = 0;
    for (int i = 0; i < m; i++) {
        pair<ll,string> p = arr[i];
        if (p.second == "USB" && a > 0) {
            a--;
            n++;
            cost += p.first;
        } else if (p.second == "PS/2" && b > 0) {
            b--;
            n++;
            cost += p.first;
        } else if (c > 0) {
            c--;
            n++;
            cost += p.first;
        }
    }

    cout << n << " " << cost;

    return 0;
}
