#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    int index = -1, mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a < mn) {
            mn = a;
            index = i;
        }
        arr[i] = a;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == mn) cnt++;
    }

    if (cnt > 1) cout << "Still Rozdil";
    else cout << index + 1;

    return 0;
}
