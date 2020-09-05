#include <iostream>
#include <stack>

using namespace std;

int main()
{

    string s; cin >> s;
    int n = s.size();
    int cnt = 0;

    int x = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            x++;
            continue;
        }

        if (x == 0) cnt++;
        else x--;
    }

    cout << n - cnt - x;

    return 0;
}
