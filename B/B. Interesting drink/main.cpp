#include <iostream>
#include <algorithm>

using namespace std;

int ans;

void bs (int l, int r, int arr[], int x) {
    if (l <= r) {
        int mid = (l+r) / 2;
        if (x >= arr[mid]) {
            ans = max(ans, mid);
            bs(mid+1, r, arr, x);
        } else bs(l, mid-1, arr, x);
    }
}

int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int q; cin >> q;
    while (q--) {
        ans = -1;
        int a; cin >> a;
        bs(0, n-1, arr, a);
        if (ans == -1) cout << 0;
        else cout << ans+1;
        cout << "\n";
    }

    return 0;
}
