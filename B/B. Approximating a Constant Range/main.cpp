#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0;
    int index = 0, last = 0;
    for (int i = 1; i < n; i++) {
        int d = arr[i] - arr[i-1];
        if (d == 0) continue;
        if (d == last) {
            ans = max(ans, i-index+1);
            last = d;
        } else {
            last = d;
        }
    }

    cout << ans;

    return 0;
}
