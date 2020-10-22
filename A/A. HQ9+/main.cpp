#include <iostream>

using namespace std;

int main()
{

    string s; cin >> s;
    for (char ch: s) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
