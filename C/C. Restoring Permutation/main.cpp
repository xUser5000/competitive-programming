#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set<int> s;
        for (int i = 1; i <= 2 * n; i++) s.insert(i);
        int arr[n];
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            arr[i] = a;
            s.erase(a);
        }

        vector<int> ans;

        for (int element: arr) {

            if (element == 2 * n) break;

            for (int j = element + 1; j <= 2 * n; j++) {
                if (s.find(j) != s.end()) {
                    ans.push_back(element);
                    ans.push_back(j);
                    s.erase(j);
                    break;
                }
            }
        }

        if (!s.empty()) {
            cout << -1 << endl;
            continue;
        }

        for (int i: ans) printf("%d ", i);
        cout << endl;

    }

    return 0;
}
