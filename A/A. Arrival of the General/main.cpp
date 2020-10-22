#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int mx = 0, mn = 200;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
        arr[i] = a;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == mx) {
            for (int j = i; j > 0; j--) {
                swap(arr[j], arr[j-1]);
                ans++;
            }
            break;
        }
    }

    for (int i = n-1; i > 0; i--) {
        if (arr[i] == mn) {
            for (int j = i; j < n-1; j++) {
                swap(arr[j], arr[j+1]);
                ans++;
            }
            break;
        }
    }

    cout << ans;

    return 0;
}
