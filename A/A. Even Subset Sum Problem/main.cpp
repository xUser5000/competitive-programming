#include <iostream>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        bool f = false;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                cout << 1 << endl << i + 1 << endl;
                f = true;
                break;
            }
        }

        if (f) continue;

        if (n < 2) {
            cout << -1 << endl;
        } else {
            printf("2\n%d %d\n", 1, 2);
        }

    }

    return 0;
}
