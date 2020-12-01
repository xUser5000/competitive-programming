#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s; cin >> s;
    int n = s.size();
    string tmp = "hello";
    queue<char> q;
    for (char ch: tmp) q.push(ch);

    for (char ch: s) {
        if (!q.empty() && ch == q.front()) q.pop();
    }

    if (q.empty()) cout << "YES";
    else cout << "NO";

    return 0;
}
