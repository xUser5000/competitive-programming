#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    int a, b;
    cin >> arr[0];
    a = arr[0], b = a;
    int ans = 0;
    for (int i = 1; i < n; i++) {
        int x; cin >> x;
        if (x > a || x < b) ans++;
        a = max(a, x);
        b = min(b, x);
    }

    cout << ans;

    return 0;
}
