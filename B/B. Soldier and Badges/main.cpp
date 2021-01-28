#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n-1) cout << ",";
    }
    cout << "]";

    return 0;
}
