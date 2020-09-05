#include <iostream>
#include <map>
#include <math.h>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    double k; cin >> k;
    map<string, long> mp;

    while (n--) {
        string s; cin >> s;
        long x; cin >> x;

        if (floor(x * k) >= 100) {
            mp[s] = floor(x * k);
        }
    }

    while (m--) {
        string s; cin >> s;
        if (mp.find(s) == mp.end()) mp[s] = 0;
    }

    cout << mp.size() << endl;
    for (auto p: mp) cout << p.first << " " << p.second << endl;


    return 0;
}
