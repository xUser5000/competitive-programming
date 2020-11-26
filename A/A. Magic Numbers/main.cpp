#include <iostream>

using namespace std;

int main()
{

    string s; cin >> s;
    for (char ch: s) {
        if (ch != '1' && ch != '4') {
            cout << "NO";
            return 0;
        }
    }

    if (s[0] == '4') {
        cout << "NO";
        return 0;
    }

    if (s.find("444") != s.end()) {
        cout << "NO";
        return 0;
    }

    cout << "YES";

    return 0;
}
