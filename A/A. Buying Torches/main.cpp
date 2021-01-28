#include <iostream>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--) {
        int x, y, k; cin >> x >> y >> k;
        int b = ((y+k)%x == 0) ? (y+k)/x : (y+k)/x + 1;
        cout << y + b << "\n";
    }

    return 0;
}
