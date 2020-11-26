#include <iostream>
#include <queue>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    queue< pair<int,int> > q;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        q.push({i, a});
    }

    int last = q.front().first;
    while (!q.empty()) {
        pair<int,int> t = q.front();
        if (t.second <= m) q.pop();
        else {
            t.second -= m;
            q.pop();
            q.push(t);
        }
        if (!q.empty()) last = q.front().first;
    }

    cout << last + 1;

    return 0;
}
