#include <iostream>
#include <map>

using namespace std;

int main()
{

    char a, b; cin >> a >> b;
    int t; cin >> t;

    map<char, int> mp;
    mp.insert({ '^', 0 });
    mp.insert({ '>', 1 });
    mp.insert({ 'v', 2 });
    mp.insert({ '<', 3 });

    if (t % 2 == 0) {
        cout << "undefined";
        return 0;
    }

    int x = (mp[a] + t) % 4;

    if (x == mp[b]) cout << "cw";
    else cout << "ccw";

    return 0;
}
