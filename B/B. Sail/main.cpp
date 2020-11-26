#include <iostream>

using namespace std;

bool check (int x1, int y1, int x2, int y2) {
    return (x1 == x2) && (y1 == y2);
}

int main()
{

    int t, x1, y1, x2, y2; cin >> t >> x1 >> y1 >> x2 >> y2;
    string s; cin >> s;
    int ans = 0;

    for (char ch : s) {
        if (ch == 'N' && y2 - y1 > 0) y1++;

        if (ch == 'S' && y1 - y2 > 0) y1--;

        if (ch == 'E' && x2 - x1 > 0) x1++;

        if (ch == 'W' && x1 - x2 > 0) x1--;

        ans++;
        if (check(x1, y1, x2, y2)) {
            cout << ans;
            return 0;
        }
    }

    cout << -1;

    return 0;
}
