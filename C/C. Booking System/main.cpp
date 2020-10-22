#include <bits/stdc++.h>

using namespace std;

bool compare (pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
}

int main()
{

    int n; cin >> n;
    multimap< pair<int,int>, int> request_index;
    pair<int,int> req[n];
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        pair<int,int> p = make_pair(a, b);
        req[i] = p;
        request_index.insert(make_pair(p, i));
    }
    sort(req, req+n, compare);

    int k; cin >> k;
    multimap<int,int> table_index;
    map<int,int> tables;
    for (int i = 0; i < k; i++) {
        int a; cin >> a;
        tables[a]++;
        table_index.insert(make_pair(a, i));
    }

    vector< pair<int,int> > ans;
    for (int i = 0; i < n; i++) {
        map<int,int>::iterator it = tables.begin();
        while (it != tables.end()) {

            if (it->first >= req[i].first) {
                ans.push_back(req[i]);
                break;
            }

            it++;
        }
    }

    return 0;
}
