#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], b[n];
        string s, t; cin >> s >> t;
        for (int i = 0; i < n; i++) a[i] = s[i] - '0';
        for (int i = 0; i < n; i++) b[i] = t[i] - '0';

        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) x++;
            if (a[i] < b[i]) y++;
        }

        if (x > y) cout << "RED";
        if (x < y) cout << "BLUE";
        if (x == y) cout << "EQUAL";
        cout << "\n";
    }

    return 0;
}
