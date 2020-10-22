#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{

    ll n; cin >> n;
    ll net = 0;
    vector<int> a, b;
    ll last = 0;
    while (n--) {
        int x; cin >> x;
        if (x > 0) {
            a.push_back(x);
        } else {
            b.push_back(-x);
        }
        net += x;
        last = x;
    }

    if (net > 0) {
        cout << "first";
        return 0;
    } else if (net < 0) {
        cout << "second";
    } else {
        int n = min((int) a.size(), (int) b.size());
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                cout << "first";
                return 0;
            } else if (b[i] > a[i]) {
                cout << "second";
                return 0;
            }
        }

        if ((int) a.size() > (int) b.size()) cout << "first";
        else if ((int) b.size() > (int) a.size()) cout << "second";
        else {
            if (last > 0) cout << "first";
            else cout << "second";
        }
    }

    return 0;
}
