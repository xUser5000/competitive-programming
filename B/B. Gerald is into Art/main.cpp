#include <iostream>

using namespace std;

int main()
{

    int a1, b1; cin >> a1 >> b1; if (a1 > b1) swap(a1, b1);
    int a2, b2; cin >> a2 >> b2; if (a2 > b2) swap(a2, b2);
    int a3, b3; cin >> a3 >> b3; if (a3 > b3) swap(a3, b3);

    bool ans = 0;
    if (a2 + a3 <= a1 && max(b2, b3) <= b1) ans = 1;
    if (b2 + b3 <= b1 && max(a2, a3) <= a1) ans = 1;
    if (a2 + a3 <= b1 && max(b2, b3) <= a1) ans = 1;
    if (b2 + b3 <= a1 && max(a2, a3) <= b1) ans = 1;

    if (ans) cout << "YES";
    else cout << "NO";

    return 0;
}
