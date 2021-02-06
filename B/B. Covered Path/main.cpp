#include <iostream>

using namespace std;

int l, r, n, d;

int solve (int i, int prev) {
    if (i == n) {
        if ( abs(prev - r) > d ) return 0;
        return r;
    }

    int ans = 0;
    int a = max(prev-d, 1);
    int b = prev+d;
    cout << a << " " << b << endl;
    for (int j = a; j <= b; j++) {
        int res = solve(i+1, j);
        if (res == 0) continue;
        ans = max(ans, j + res);
    }

    return ans;
}

int main()
{

    cin >> l >> r >> n >> d;

    cout << l + solve(1, l);

    return 0;
}
