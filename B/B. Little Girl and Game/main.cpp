#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n), where n is the length of the string
bool palindrome (map<char,int> mp, int n) {

    if (n == 1) return true;

    bool f = true;
    if (n % 2 == 0) {
        for (pair<char,int> p: mp) {
            if (p.second % 2 != 0) {
                f = false;
                break;
            }
        }
    } else {

        int x = 0;
        for (pair<char,int> p: mp) {
            if (p.second % 2 == 0) continue;
            if (p.second % 2 == 1) x++;
            if (x > 1) {
                f = false;
                break;
            }
        }

    }
    return f;
}

int main()
{


    string s; cin >> s;
    int n = s.size();
    map<char,int> mp;
    for (char ch: s) mp[ch]++;

    bool f = false;
    while (true) {

        if (palindrome(mp, n)) break;

        bool c = false;
        for (pair<char,int> p: mp) {
            if (p.second % 2 == 0) {
                mp[p.first]--;
                c = true;
                break;
            }
        }

        if (!c) {
            pair<char,int> p = *mp.begin();
            mp[p.first]--;
            if (mp[p.first] == 0) mp.erase(p.first);
        }

        n--;
        f = !f;
    }

    if (!f) cout << "First";
    else cout << "Second";

    return 0;
}
