#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    pair<int, int> arr[m];
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        arr[i] = make_pair(b, a);
    }

    int ans = 0, boxes = 0;

    sort(arr, arr + m);

    for (int i = m - 1; i >= 0; i--) {

        pair<int, int> p = arr[i];

        if (n - boxes >= p.second) {
            boxes += p.second;
            ans += p.first * p.second;
        } else {

            ans += (n - boxes) * p.first;
            break;

        }
    }

    cout << ans;

    return 0;
}
