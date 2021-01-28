#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        if ((int) s.size() < 3) {
            cout << "0\n";
            continue;
        }

        map<char,int> mp;
        int l = 0, r = 0;
        int ans = 0;
        while (l < n) {
            while (r < n) {
                mp[ s[r] ]++;
                if ((int) mp.size() == 3) break;
                r++;
            }

            if ((int) mp.size() == 3) {
                mp[ s[l] ]--;
                if (mp[ s[l] ] == 0) mp.erase(s[l]);
                ans = (ans == 0) ? r-l+1 : min(ans, r-l+1);
            } else break;
            l++;
        }

        cout << ans << "\n";
    }

    return 0;
}
