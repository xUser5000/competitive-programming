#include <bits/stdc++.h>

using namespace std;

int main()
{

    priority_queue<int> a;
    priority_queue<int, vector<int>, greater<int> > b;

    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        a.push(x);
        b.push(x);
    }

    int mx = 0, mn = 0;
    for (int i = 0; i < n; i++) {
        if (a.empty()) break;

        int x = a.top();
        mx += x;
        x--;
        a.pop();
        if (x > 0) a.push(x);
    }

    for (int i = 0; i < n; i++) {
        if (b.empty()) break;

        int x = b.top();
        mn += x;
        x--;
        b.pop();
        if (x > 0) b.push(x);
    }

    cout << mx << " " << mn;

    return 0;
}
