#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int,int> mp;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            mp[a%3]++;
        }

        int ans = mp[0] + min(mp[1], mp[2]);
        int d = max(mp[1], mp[2]) - min(mp[1], mp[2]);
        ans += d/3;
        printf("%d\n", ans);
    }

    return 0;
}
