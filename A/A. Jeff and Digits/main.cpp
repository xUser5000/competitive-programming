#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int z = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == 0) z++;
        else cnt++;
    }

    if (z == 0) {
        cout << -1;
        return 0;
    }

    int c = (cnt / 9) * 9;

    if (c == 0) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < c; i++) cout << 5;
    for (int i = 0; i < z; i++) cout << 0;

    return 0;
}
