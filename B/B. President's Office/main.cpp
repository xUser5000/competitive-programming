#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    char c; cin >> c;

    int arr[n][m];

    int x1 = -1, y1 = -1, x2 = -1, y2 = -1;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < m; j++) {
            char ch = s[j];
            arr[i][j] = ch;

            if (ch == c) {
                if (x1 == -1 && y1 == -1) {
                    x1 = j;
                    y1 = i;
                } else {
                    x2 = j;
                    y2 = i;
                }
            }
        }
    }

    if (x2 == -1 && y2 == -1) {
        x2 = x1;
        y2 = y1;
    }

    set<char> s;

    // insert all chars around the president's office into the set
    // then print out the size of the set

    return 0;
}
