#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    string s; cin >> s;

    if (n > 26) {
        cout << -1;
        return 0;
    }

    set<char> st;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (st.find(s[i]) != st.end()) ans++;
        else st.insert(s[i]);
    }

    cout << ans;

    return 0;
}
