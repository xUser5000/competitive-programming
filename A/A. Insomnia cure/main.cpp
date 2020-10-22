#include <iostream>

using namespace std;

bool divide (int i, int d) {
    return i % d == 0;
}

int main()
{

    int k, l, m, n, d; cin >> k >> l >> m >> n >> d;

    int ans = 0;
    for (int i = 1; i <= d; i++) {
        if (divide(i, k) || divide(i, l) || divide(i, m) || divide(i, n)) ans++;
    }

    cout << ans;

    return 0;
}
