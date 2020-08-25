#include <iostream>
#include <set>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    set<int> s;
    int sum [n];
    for (int i = n - 1; i >= 0; i--) {
        int element = arr[i];
        s.insert(element);
        sum[i] = s.size();
    }

    while (m--) {
        int a; cin >> a;
        a--;
        cout << sum[a] << endl;
    }


    return 0;
}
