#include <bits/stdc++.h>

using namespace std;

void test () {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    bool mark[n];
    memset(mark, false, sizeof mark);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') x++;
        else y++;

        if (x == y) mark[i] = true;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i] && !mark[i]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t; cin >> t;
    while (t--) test();
    return 0;
}
