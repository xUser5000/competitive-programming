#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    map<string,int> mp;

    while (n--) {
        string s; cin >> s;
        mp[s]++;
    }

    if (mp.rbegin()->second > mp.begin()->second) cout << mp.rbegin()->first;
    else cout << mp.begin()->first;

    return 0;
}
