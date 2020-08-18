#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    string ans = "";

    bool f = n % 2 == 1;

    for (int i = 0; i < n; i++) {
        if (f) ans = ans + s[i];
        else ans = s[i] + ans;
        f = !f;
    }

    cout << ans;

    return 0;
}
