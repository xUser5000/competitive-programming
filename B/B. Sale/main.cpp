#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a < 0) arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    for (int i = 0; i < (int) arr.size() && m > 0; i++) {
        ans += -arr[i];
        m--;
    }

    cout << ans;

    return 0;
}
