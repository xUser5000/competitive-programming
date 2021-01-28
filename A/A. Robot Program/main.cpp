#include <iostream>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        int ans = min(x, y) * 2;
        int a = min(x, y);
        int b = max(x, y);
        ans += (b-a) + (b-a-1);

        printf("%d\n", ans);
    }

    return 0;
}
