#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    if (n <= 10) {
        cout << 0;
        return 0;
    }
    int ans = 0;
    for (int i = 1; i <= 11; i++) {
        if (10 + i == n) ans += 4;
    }

    if (n == 20) ans += 15;

    return 0;
}
