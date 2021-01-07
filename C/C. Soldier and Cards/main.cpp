#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    int a; cin >> a;
    queue<int> x;
    for (int i = 0; i < a; i++) {
        int z; cin >> z;
        x.push(z);
    }
    int b; cin >> b;
    queue<int> y;
    for (int i = 0; i < b; i++) {
        int z; cin >> z;
        y.push(z);
    }

    int cnt = 0;
    bool f = true;
    while (!y.empty() && !x.empty()) {
        if (cnt > 10000) {
            f = false;
            break;
        }
        int a = x.front(); x.pop();
        int b = y.front(); y.pop();
        if (a > b) {
            x.push(b);
            x.push(a);
        } else {
            y.push(a);
            y.push(b);
        }
        cnt++;
    }

    if (!f) {
        cout << -1;
        return 0;
    }

    cout << cnt << " " << ( (y.empty()) ? 1 : 2 );

    return 0;
}
