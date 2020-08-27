#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{

    int n, x; cin >> n >> x;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    ll t = 0;

    for (int i = 0; i < n; i++) {
        t += arr[i] * x;

        if (x > 1) x--;
    }

    cout << t;

    return 0;
}
