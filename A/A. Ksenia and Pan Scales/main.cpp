#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string x, y; cin >> x >> y;
    vector<char> a, b;
    bool f = true;
    for (char ch: x) {
        if (ch == '|') {
            f = false;
            continue;
        }

        if (f) a.push_back(ch);
        else b.push_back(ch);
    }

    for (char ch: y) {
        if (a.size() <= b.size()) a.push_back(ch);
        else b.push_back(ch);
    }

    if (a.size() != b.size()) cout << "Impossible";
    else {
        for (char ch: a) cout << ch;
        cout << "|";
        for (char ch: b) cout << ch;
    }

    return 0;
}
