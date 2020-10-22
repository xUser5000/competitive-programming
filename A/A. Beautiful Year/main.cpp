#include <bits/stdc++.h>

using namespace std;

bool distinct (int x) {
    string s = to_string(x);
    int n = s.size();
    unordered_set<char> st;
    for (int i = 0; i < n; i++) st.insert(s[i]);

    if ((int) st.size() == n) return true;
    else return false;
}

int main()
{

    int x; cin >> x;
    x++;
    while (true) {
        if (distinct(x)) {
            cout << x;
            break;
        }
        x++;
    }

    return 0;
}
