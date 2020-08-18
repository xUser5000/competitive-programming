#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n; cin >> n;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        arr[i] = make_pair(a, b);
    }

    sort(arr, arr + n);

    for (int i = 1; i < n; i++) {
        if (arr[i].second < arr[i - 1].second) {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";

    return 0;
}
