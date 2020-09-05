#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (n == 1) {
        cout << "YES";
        return 0;
    }

    sort(arr, arr + n);

    int a = arr[0], b = arr[n - 1];
    double c = (double) (b + a) / 2;

    for (int i = 0; i < n; i++) {
        int element = arr[i];

        if (element != a && element != b && element != c) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
