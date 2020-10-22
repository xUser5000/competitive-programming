#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a, b, c; cin >> a >> b >> c;

    map<char,int> mp;
    for (char ch: c) mp[ch]++;

    bool f = true;
    for (char ch: a) {
        if (mp.find(ch) == mp.end()) {
            f = false;
            break;
        }

        mp[ch]--;
        if (mp[ch] == 0) mp.erase(ch);
    }

    for (char ch: b) {
        if (mp.find(ch) == mp.end()) {
            f = false;
            break;
        }

        mp[ch]--;
        if (mp[ch] == 0) mp.erase(ch);
    }

    if (mp.size() != 0) f = false;

    if (f) cout << "YES";
    else cout << "NO";

    return 0;
}
