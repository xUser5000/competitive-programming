#include <iostream>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    int ans = 0;
    for (int a = 0; a <= 500; a++) {
        for (int b = 0; b <= 500; b++) {
            if (a*a + b == n && b*b + a == m) ans++;
        }
    }

    cout << ans;

    return 0;
}
