#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    int a = 0, g = 0;
    vector<char> ans;
    while (n--) {
        int x, y; cin >> x >> y;
        if (abs(a+x - g) <= 500) {
            a += x;
            ans.push_back('A');
        } else {
            g += y;
            ans.push_back('G');
        }
    }

    if (abs(a-g) <= 500) {
        for (char element: ans) cout << element;
    } else cout << -1;

    return 0;
}
