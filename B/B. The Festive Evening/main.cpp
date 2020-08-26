#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{

    int n, k; cin >> n >> k;
    string s; cin >> s;

    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        char ch = s[i];

        if (mp.find(ch) == mp.end()) mp[ch] = 1;
        else mp[ch]++;
    }

    set<char> st;

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        st.insert(ch);

        if (st.size() > k) {
            cout << "YES";
            return 0;
        }

        mp[ch]--;

        if (mp[ch] == 0) st.erase(ch);

    }

    cout << "NO";

    return 0;
}
