#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n, l; cin >> n >> l;
    double arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    double ans = max(arr[0], l - arr[n - 1]);

    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, ( arr[i + 1] - arr[i] ) / 2 );
    }

    printf("%.10f", ans);

    return 0;
}
