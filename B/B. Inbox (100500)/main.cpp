#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) cnt++;
        else {
            if (cnt != 0) ans += cnt+1;
            cnt = 0;
        }
    }

    if (cnt != 0) ans += cnt+1;
    if (ans != 0) ans--;

    cout << ans;

    return 0;
}
