#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    pair<int,int> arr[n];
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        arr[i] = make_pair(a, b);
    }

    int ans = 0;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].first == 1) a++;
        else b++;
    }

    ans += min(a, b);
    a = 0, b = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i].second == 1) a++;
        else b++;
    }

    ans += min(a, b);

    cout << ans;

    return 0;
}
