#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            i = -1;
        }
    }

    // print the array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
