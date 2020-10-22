#include <iostream>

using namespace std;

int main()
{

    string s; cin >> s;
    int n = s.size();
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '4' || s[i] == '7') x++;
    }

    s = to_string(x);
    n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] != '4' && s[i] != '7') {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
