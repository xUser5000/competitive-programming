#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    cin >> arr[0] >> arr[0];
    for (int i = 1; i < n; i++) {
        int a, b; cin >> a >> b;
        arr[i] = arr[i-1] - a;
        arr[i] = arr[i] + b;
    }

    int a = 0, b = INT_MAX;
    for (int i = 0; i < n; i++) {
        a = max(a, arr[i]);
        b = min(b, arr[i]);
    }

    if (b < 0) cout << abs(b) + a;
    else cout << a;

    return 0;
}
