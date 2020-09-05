#include <iostream>
#include <vector>
#include <map>
#include <limits.h>

using namespace std;

int main()
{

    int n; cin >> n;
    map<string,int> mp;
    vector< pair<string,int> > vc;
    while (n--) {
        string s; cin >> s;
        int x; cin >> x;
        mp[s] += x;

        vc.push_back({ s, x });
    }

    int mx = INT_MIN;
    for (pair<string,int> p: mp) {
        mx = max(mx, p.second);
    }

    map<string,int> mp2;
    for (pair<string,int> p: vc) {
        string s = p.first;
        int x = p.second;

        mp2[s] += x;

        if (mp[s] == mx && mp2[s] >= mx) {
            cout << s;
            break;
        }
    }

    return 0;
}
