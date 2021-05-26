#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    map<int,int> mp;
    while (m--) {
        int high = -1, index = -1;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a > high) high = a, index = i;
        }
        mp[index]++;
    }

    int high = -1;
    for (auto p: mp) high = max(high, p.second);

    int index = 100;
    for (auto p: mp) {
        if (p.second == high) index = min(index, p.first);
    }

    cout << index+1;

    return 0;
}
