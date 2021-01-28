#include <iostream>

using namespace std;

typedef long long ll;

int main()
{

    int n; cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll ans = abs(arr[0]);
    for (int i = 1; i < n; i++) ans += abs(arr[i] - arr[i-1]);
    cout << ans;

    return 0;
}
