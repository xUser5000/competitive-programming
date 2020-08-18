#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = arr[0];
    int eng = 0;

    for (int i = 0; i < n - 1; i++) {

        eng += arr[i] - arr[i + 1];

        if (eng < 0) {
            ans += abs(eng);
            eng = 0;
        }
    }

    cout << ans;

    return 0;
}
