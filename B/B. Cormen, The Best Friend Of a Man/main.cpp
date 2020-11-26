#include <iostream>

using namespace std;

int main()
{

    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0;
    for (int i = 1; i < n; i++) {
        int sum = arr[i] + arr[i-1];
        if (sum < k) {
            ans += k - sum;
            arr[i] += k - sum;
        }
    }

    cout << ans << endl;
    for (int element: arr) cout << element << " ";

    return 0;
}
