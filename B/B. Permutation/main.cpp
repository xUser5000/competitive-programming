#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    set<int> s;
    for (int i = 1; i <= n; i++) s.insert(i);

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) != s.end()) s.erase(arr[i]);
    }

    cout << s.size();

    return 0;
}
