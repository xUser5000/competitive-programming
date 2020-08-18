#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = -1;

    for (int i = 1; i < n; i++) {

        if (s[i] == 'L' && s[i - 1] == 'R') {\
            if (ans == -1) ans = (arr[i] - arr[i - 1]) / 2;
            else ans = min(ans, (arr[i] - arr[i - 1]) / 2);
        }

    }

    cout << ans;

    return 0;
}
