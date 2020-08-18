#include <iostream>

using namespace std;

int main()
{

    int n, k; cin >> n >> k;
    int x = 0;
    while (n--) {
        int a, b; cin >> a >> b;
        x += b - a + 1;
    }

    if (x % k == 0) cout << 0;
    else cout << ((x / k) + 1) * k - x;

    return 0;
}
