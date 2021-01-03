#include <iostream>
#include <set>
using namespace std;

int main()
{

    int p, q, l, r; cin >> p >> q >> l >> r;
    set<int> s;
    for (int i = 0; i < p; i++) {
        int a, b; cin >> a >> b;
        for (int j = a; j <= b; j++) s.insert(j);
    }
    pair<int,int> arr[q];
    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        arr[i] = make_pair(a, b);
    }

    int ans = 0;

    for (int i = l; i <= r; i++) {
        int t = i;
        for (int j = 0; j < q; j++) {
            int a = arr[j].first + t;
            int b = arr[j].second + t;

            for (int k = a; j <= b; k++) {
                if (s.find(k) != s.end()) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans;

    return 0;
}
