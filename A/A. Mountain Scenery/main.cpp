#include <iostream>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int arr[2 * n + 1];
    for (int i = 1; i <= 2 * n + 1; i++) cin >> arr[i];

    for (int i = 1; i <= 2 * n + 1; i++) {
        if (i % 2 == 0 && k != 0 && arr[i] > arr[i - 1] + 1 && arr[i] > arr[i + 1] + 1) {
            printf("%d ", arr[i] - 1);
            k--;
            continue;
        }

        printf("%d ", arr[i]);
    }

    return 0;
}
