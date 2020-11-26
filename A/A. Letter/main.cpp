#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<char,int> mp;
    string a, b;
    getline(cin, a);
    getline(cin, b);

    for (char ch: a) {
        if (ch == ' ') continue;
        mp[ch]++;
    }

    for (char ch: b) {
        if (ch == ' ') continue;
        if (mp.find(ch) == mp.end() || mp[ch] == 0) {
            cout << "NO";
            return 0;
        } else mp[ch]--;
    }

    cout << "YES";

    return 0;
}
