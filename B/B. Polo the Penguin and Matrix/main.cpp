#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, d; cin >> n >> m >> d;
    vector<int> arr;
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a; cin >> a;
            arr.push_back(a);
            mp[a]++;
        }
    }

    sort(arr.begin(), arr.end());
    n = arr.size();
    int k;
    if (n % 2 == 1) k = arr[n/2];
    else {
        if (mp[ arr[n/2-1] ] > mp[ arr[n/2] ]) k = arr[n/2-1];
        else k = arr[n/2];
    }

    int ans = 0;
    for (int element: arr) {
        if (abs(element - k) % d != 0) {
            cout << -1;
            return 0;
        }
        ans += abs(element - k) / d;
    }

    cout << ans;

    return 0;
}
