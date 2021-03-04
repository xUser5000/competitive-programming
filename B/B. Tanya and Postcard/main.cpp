#include <bits/stdc++.h>

using namespace std;

char toggle (char x) {
    if (islower(x)) return toupper(x);
    else return tolower(x);
}

int main()
{

    string s, t; cin >> s >> t;
    int n = s.size();
    map<char,int> mp;
    for (char ch: t) {
        mp[ch]++;
    }

    int a = 0, b = 0;
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (mp[ s[i] ] > 0) {
            a++;
            mp[ s[i] ]--;
            ans += s[i];
        } else ans += "1";
    }

    for (int i = 0; i < n; i++) {
        if (ans[i] == '1' && mp[ toggle(s[i]) ] > 0) {
            b++;
            mp[ toggle(s[i]) ]--;
        }
    }

    cout << a << " " << b;

    return 0;
}
