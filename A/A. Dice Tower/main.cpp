#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int k; cin >> k;

    bool flag = false;

    while (n--) {
        int a, b; cin >> a >> b;
        if (a == k || a == 7 - k) flag = true;
        if (b == k || b == 7 - k) flag = true;
    }

    if (flag) cout << "NO";
    else cout << "YES";

    return 0;
}
