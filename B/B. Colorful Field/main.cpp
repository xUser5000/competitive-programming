#include <iostream>
#include <algorithm>

using namespace std;

int n, m, k, t;

int index (int i, int j) {
    return (i - 1) * m + j;
}

int main()
{

    cin >> n >> m >> k >> t;
    int arr[k];

    for (int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        arr[i] = index(a, b);
    }

    sort(arr, arr + k);

    while (t--) {
        int a, b; cin >> a >> b;

        int x = index(a, b);

        int cnt = 0;
        for (int i = 0; i < k; i++) {
            int element = arr[i];

            if (x > element) cnt++;
            else if (x == element) {
                cnt = -1;
                break;
            } else break;
        }

        if (cnt == -1) {
            cout << "Waste" << endl;
            continue;
        }

        int mod = (x - cnt - 1) % 3;

        if (mod == 0) cout << "Carrots" << endl;
        if (mod == 1) cout << "Kiwis" << endl;
        if (mod == 2) cout << "Grapes" << endl;
    }

    return 0;
}
