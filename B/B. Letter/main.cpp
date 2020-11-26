#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a;
    getline(cin, a);
    map<char,int> mp;
    for (char ch: a) {
        if (ch == ' ') continue;
        mp[ch]++;
    }

    string b;
    getline(cin, b);
    for (char ch: b) {
        if (ch == ' ') continue;
        if (mp.find(ch) == mp.end()) {
            cout << "NO";
            return 0;
        }
        mp[ch]--;
        if (mp[ch] == 0) mp.erase(ch);
    }

    cout << "YES";

    return 0;
}
