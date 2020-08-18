#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<char, int> mp;
    mp.insert({ 'A', 0 });
    mp.insert({ 'B', 0 });
    mp.insert({ 'C', 0 });

    for (int i = 0; i < 3; i++) {
        string s; cin >> s;
        if (s[1] == '>') mp[s[0]]++;
        else mp[s[2]]++;
    }

    if (mp['A'] == mp['B']) {
        cout << "Impossible";
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        for (auto p: mp) {
            if (p.second == i) cout << p.first;
        }
    }

    return 0;
}
