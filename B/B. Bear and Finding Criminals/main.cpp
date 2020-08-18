#include <iostream>

using namespace std;

int main()
{
    int n, a; cin >> n >> a;
    a--;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = arr[a];

    int x = a - 1, y = a + 1;

    while (x >= 0 || y < n) {

        if (x >= 0 && y < n) ans += (arr[x] + arr[y] == 2) ? 2 : 0;
        else if (x >= 0 && y >= n) ans += arr[x];
        else if (x < 0 && y < n) ans += arr[y];

        x--; y++;
    }

    cout << ans;

    return 0;
}
