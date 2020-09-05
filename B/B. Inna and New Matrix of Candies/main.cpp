#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    vector< pair<int,int> > vc;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int a = 0, b = 0;
        for (int j = 0; j < m; j++) {
            char ch = s[j];
            if (ch == 'G') a = j;
            if (ch == 'S') b = j;
        }
        vc.push_back({a, b});
    }

    set<int> s;
    for (pair<int,int> p: vc) {
        if (p.first == p.second) continue;

        if (p.first > p.second) {
            cout << -1;
            return 0;
        }

        s.insert(p.second  - p.first);
    }

    cout << (int) s.size();

    return 0;
}
