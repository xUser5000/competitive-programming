#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    string str; cin >> str;

    int s = 0, t = 0;

    pair<int, char> a, b;

    for (int i = 0; i < n; i++) if (str[i] != '.') {a = make_pair(i, str[i]); break; }
    for (int i = n - 1; i >= 0; i--) if (str[i] != '.') { b = make_pair(i, str[i]); break; }

    if (a.second == 'R' && b.second == 'R') {
        s = a.first;
        t = b.first + 1;
    } else if (a.second == 'L' && b.second == 'L') {
        s = b.first;
        t = a.first - 1;
    } else {
        s = a.first;
        for (int i = s; i < n; i++)
            if (str[i] == 'L') {
                t = i - 1;
                break;
            }
    }

    printf("%d %d", s + 1, t + 1);

    return 0;
}
