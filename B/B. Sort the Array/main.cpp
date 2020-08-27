#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sorted[n];
    copy(arr, arr + n, sorted);
    sort(sorted, sorted + n);

    int a = 0, b = n - 1;
    for (; a < n; a++) {
        if (arr[a] != sorted[a]) break;
    }

    for (; b >= 0; b--) {
        if (arr[b] != sorted[b]) break;
    }

    if (b < a) {
        printf("yes\n%d %d", 1, 1);
        return 0;
    }


    for (int i = a; i < b; i++) {
        if (arr[i] < arr[i + 1]) {
            cout << "no";
            return 0;
        }
    }

    printf("yes\n%d %d", a + 1, b + 1);

    return 0;
}
