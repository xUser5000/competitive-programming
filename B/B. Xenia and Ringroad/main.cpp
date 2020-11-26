#include <iostream>

using namespace std;

typedef long long ll;

int main()
{

    ll n, m; cin >> n >> m;
    ll arr[m];
    for (int i = 0; i < m; i++) {
        int a; cin >> a;
        a--;
        arr[i] = a;
    }

    ll ans = arr[0] - 0;
    for (int i = 1; i < m; i++) {
        if (arr[i] >= arr[i-1]) ans += arr[i] - arr[i-1];
        else ans += n - abs(arr[i] - arr[i-1]);
    }

    cout << ans;

    return 0;
}
