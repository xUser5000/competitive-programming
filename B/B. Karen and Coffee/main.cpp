#include <iostream>

using namespace std;

#define V 200000

int main()
{

    int n, k, q; cin >> n >> k >> q;
    int arr[V + 9] = {0};
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        arr[a]++;
        arr[b + 1]--;
    }

    int sum[V + 9] = {0};
    sum[1] = arr[1];
    for (int i = 2; i < V + 9; i++) sum[i] = sum[i - 1] + arr[i];

    sum[1] = (sum[1] >= k);
    for (int i = 2; i < V + 9; i++) sum[i] = sum[i - 1] + (sum[i] >= k);

    while (q--) {
        int a, b; cin >> a >> b;
        printf("%d\n", sum[b] - sum[a - 1]);
    }

    return 0;
}
