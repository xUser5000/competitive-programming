#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++) cin >> arr[i];

    sort(arr, arr+m);
    int ans = INT_MAX;
    for (int i = 0; i <= m-n; i++) {
        ans = min(ans, arr[i+n-1] - arr[i]);
    }

    cout << ans;

    return 0;
}
