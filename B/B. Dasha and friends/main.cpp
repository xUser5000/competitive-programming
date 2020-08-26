#include <iostream>
#include <set>

using namespace std;

int main()
{

    int n, l; cin >> n >> l;

    set<int> s;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        s.insert(a);
    }

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < l; i++) {

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int element = arr[i];

            if (s.find(element) != s.end()) cnt++;

            arr[i] = (arr[i] + 1) % l;
        }

        if (cnt == n) {
            cout << "YES";
            return 0;
        }

    }

    cout << "NO";

    return 0;
}
