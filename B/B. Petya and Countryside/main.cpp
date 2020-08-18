#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = 1;

    for (int i = 0; i < n; i++) {
        int d = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] <= arr[j - 1]) d++;
            else break;
        }

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] <= arr[j + 1]) d++;
            else break;
        }

        ans = max(ans, d);
    }

    cout << ans;

    return 0;
}
