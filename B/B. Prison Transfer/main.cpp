#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, t, c; cin >> n >> t >> c;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> vc;
    vc.push_back(-1);
    for (int i = 0; i < n; i++) {
        if (arr[i] > t) vc.push_back(i);
    }
    vc.push_back(n);

    int ans = 0;

    n = vc.size();
    for (int i = 1; i < n; i++) {
        int k = vc[i] - vc[i-1] - 1;
        if (k < c) continue;
        ans += k-c+1;
    }

    cout << ans;

    return 0;
}
