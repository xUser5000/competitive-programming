#include <iostream>

using namespace std;

int main()
{

    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;

        if (sum >= k) {
            sum -= i;
            int c = k-sum;
            cout << arr[c-1] << endl;
            return 0;
        }
    }

    return 0;
}
