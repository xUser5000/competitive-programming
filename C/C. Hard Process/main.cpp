#include <iostream>

using namespace std;

int main()
{

    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int a = 0, b = 0;
    int l = 0, r = 0;
    int cnt = 0;
    while (l < n) {
        while (r < n && cnt + (arr[r] == 0) <= k) {
            if (arr[r] == 0) cnt++;
            r++;
        }
        if (r-l > b-a) {
            a = l;
            b = r;
        }

        if (arr[l] == 0) cnt--;
        l++;
    }

    int c = k;
    for (int i = a; i < b; i++) {
        if (c == 0) break;
        if (arr[i] == 0) {
            arr[i] = 1;
            c--;
        }
    }

    cout << b-a << endl;
    for (int element: arr) cout << element << " ";

    return 0;
}
