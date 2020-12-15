#include <iostream>

using namespace std;

int main()
{

    int n, k; cin >> n >> k;
    int arr[n];
    int t[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    int sum = 0;
    for (int i = 0; i < n; i++) if (t[i] == 1) sum += arr[i];
    for (int i = 0; i < k; i++) {
        if (t[i] == 0) sum += arr[i];
    }
    //cout << 0 << " " << k-1 << " " << sum << endl;
    int ans = sum;
    for (int i = k; i < n; i++) {
        if (t[i-k] == 0) sum -= arr[i-k];
        if (t[i] == 0) sum += arr[i];
        //cout << i-k+1 << " " << i << " " << sum << endl;
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}
