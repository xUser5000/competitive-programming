#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    string s; cin >> s;
    int ans = 0;
    int l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            if (l == -1) l = i, r = i;
            else r++;
        } else {
            if (l != -1) ans += r-l;
            l = -1, r = -1;
        }
    }
    if (l != -1) ans += r-l;

    while (m--) {
        int i; cin >> i; i--;
        char ch; cin >> ch;

        if (ch == '.') {
            if (s[i] != '.') {
                if (i+1 < n && s[i+1] == '.') ans++;
                if (i-1 >= 0 && s[i-1] == '.') ans++;
            }
            cout << ans << "\n";
        } else {
            if (s[i] == '.') {
                if (i+1 < n && s[i+1] == '.') ans--;
                if (i-1 >= 0 && s[i-1] == '.') ans--;
            }
            cout << ans << "\n";
        }

        s[i] = ch;
    }

    return 0;
}
