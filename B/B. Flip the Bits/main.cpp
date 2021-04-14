#include <bits/stdc++.h>

using namespace std;

void test () {
    int n; cin >> n;
    bool a[n], b[n];
    for (int i = 0; i < n; i++) {
        char x; cin >> x;
        a[i] = x-'0';
    }
    for (int i = 0; i < n; i++) {
        char x; cin >> x;
        b[i] = x-'0';
    }
    bool mark[n];
    memset(mark, false, sizeof mark);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) x++;
        else y++;
        if (x == y) mark[i] = true;
    }

    bool rev = false;
    for (int i = n-1; i >= 0; i--) {
        bool x = (!rev) ? (a[i]) : (!a[i]);
        bool y = b[i];
        //cout << x << " " << y << "\n";
        if (x == y) continue;
        if (!mark[i]) {
            cout << "NO\n";
            return;
        }
        rev = !rev;
    }

    cout << "YES\n";
}

int main()
{

    int t; cin >> t;
    while (t--) test();

    return 0;
}

/*
1
10
0111010000
0100101100
*/
