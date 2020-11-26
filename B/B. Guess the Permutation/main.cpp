#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        set<int> s;
        for (int j = 0; j < n; j++) s.insert(arr[i][j]);
        if (s.size() == n) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] != 0) cout << arr[i][j] << " ";
                else cout << n << " ";
            }
            return 0;
        }
    }

    return 0;
}
