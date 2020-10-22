#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    map<int,int> add, sub;
    pair<int,int> arr[n];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;

        ans += add[a+b];
        add[a+b]++;

        ans += sub[a-b];
        sub[a-b]++;
    }

    cout << ans;

    return 0;
}
