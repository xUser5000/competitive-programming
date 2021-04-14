#include <iostream>

using namespace std;

int main()
{

    int v1, v2; cin >> v1 >> v2;
    int t, d; cin >> t >> d;
    int ans = 0;
    int current = v1;
    for (int i = 0; i < t; i++) {
        ans += current;
        int rem = t-2-i;
        current = min(current + d, v2 + rem * d);
    }
    cout << ans;

    return 0;
}
