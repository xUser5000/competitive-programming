#include <iostream>

using namespace std;

typedef long long ll;

ll x;

ll solve (ll index, ll lucky) {
    if (lucky > x) return -1;
    if (lucky == x) return index;

    return max(
        solve(2 * index + 1, lucky * 10 + 4),
        solve(2 * index + 2, lucky * 10 + 7)
    );
}

int main()
{

    cin >> x;

    cout << solve(0, 0);

    return 0;
}
