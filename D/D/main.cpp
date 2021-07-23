#include <bits/stdc++.h>

using namespace std;

set<int> div (int n) {
    set<int> s;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    if (n != 1) s.insert(n);
    return s;
}

int main()
{

    map<int,int> mp;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        set<int> res = div(x);
        int ans = 0;
        for (int j: res) {
            if (mp.find(j) == mp.end() || mp[j] < i-y) ans++;
            mp[j] = i;
        }
        cout << ans << "\n";
    }

    return 0;
}
