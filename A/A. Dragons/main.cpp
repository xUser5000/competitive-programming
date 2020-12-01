#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    int s, n; cin >> s >> n;
    pair<int,int> arr[n];
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        arr[i] = make_pair(a, b);
    }

    sort(arr, arr+n);

    for (int i = 0; i < n; i++) {
        if (s > arr[i].first) s += arr[i].second;
        else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
