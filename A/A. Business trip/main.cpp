#include <bits/stdc++.h>

using namespace std;

int main()
{

    int k; cin >> k;
    int arr[12];
    for (int i = 0; i < 12; i++) cin >> arr[i];

    sort(arr, arr+12);
    reverse(arr, arr+12);

    int ans = 0;
    for (int i = 0; i < 12 && k > 0; i++) {
        k -= arr[i];
        ans++;
    }

    if (k > 0) {
        cout << -1;
        return 0;
    }

    cout << ans;

    return 0;
}
