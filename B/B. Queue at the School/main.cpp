#include <iostream>

using namespace std;

int main()
{

    int n, t; cin >> n >> t;
    string s; cin >> s;

    while (t--) {
        string res = s;
        for (int i = 1; i < n; i++) {
            if (s[i] == 'G' && s[i-1] == 'B') swap(res[i], res[i-1]);
        }
        s = res;
    }

    cout << s;

    return 0;
}
