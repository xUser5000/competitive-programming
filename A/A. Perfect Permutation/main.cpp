#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;

    if (n%2 == 1) {
        cout << "-1";
        return 0;
    }

    int arr[n];
    for (int i = 1; i <= n; i++) arr[i-1] = i;
    for (int i = 0; i < n; i += 2) {
        swap(arr[i], arr[i+1]);
    }

    for (int element: arr) cout << element << " ";

    return 0;
}
