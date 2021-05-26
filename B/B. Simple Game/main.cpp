#include <iostream>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;

    if (n == 1) {
        cout << 1;
        return 0;
    }

    int ans = 0;
    int mid = (n+1) / 2;
    if (n % 2 == 0) {
        if (m <= mid) ans = m+1;
        else ans = m-1;
    } else {
        if (m >= mid) ans = m-1;
        else ans = m+1;
    }

    cout << ans;

    return 0;
}
