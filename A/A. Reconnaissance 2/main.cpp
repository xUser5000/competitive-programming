#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int l, r, d = INT_MAX;

    for (int i = 1; i <= n; i++) {
        int diff = abs(arr[i%n] - arr[i-1]);
        if (diff < d) {
            d = diff;
            r = i%n;
            l = i-1;
        }
    }

    cout << l+1 << " " << r+1;

    return 0;
}
