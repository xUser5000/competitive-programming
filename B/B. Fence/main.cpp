#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

    int n, k; cin >> n >> k;
    int sum[n + 1];
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        sum[i] = sum[i - 1] + a;
    }

    int j = 0;
    int total = INT_MAX;

    for (int i = k; i <= n; i++) {

        int s = sum[i] - sum[i - k];

        if (s < total) {
            total = s;
            j = i - k + 1;
        }

    }

    cout << j;

    return 0;
}
