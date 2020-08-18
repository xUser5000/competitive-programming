#include <iostream>
#include <set>

using namespace std;

int main()
{

    int n, k; cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        set<int> st;
        for (int j = 0; j < s.size(); j++) {
            int a = s[j] - '0';
            if (a <= k) st.insert(a);
        }

        if (st.size() == k + 1) ans++;
    }

    cout << ans;

    return 0;
}
