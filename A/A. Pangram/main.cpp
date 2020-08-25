#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{

    int n; cin >> n;
    string str; cin >> str;

    set<char> s;

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        s.insert(tolower(ch));
    }

    if (s.size() == 26) cout << "YES";
    else cout << "NO";

    return 0;
}
