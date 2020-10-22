#include <iostream>

using namespace std;

int n, d;

int f1 (int x) {
    return x-d;
}

int f2 (int x) {
    return x+d;
}

int f3 (int x) {
    return -x+d;
}

int f4 (int x) {
    return -x+2*n-d;
}

int main()
{

    cin >> n >> d;
    int m; cin >> m;
    while (m--) {
        int x, y; cin >> x >> y;

        int res1 = f1(x);
        int res2 = f2(x);
        int res3 = f3(x);
        int res4 = f4(x);

        if (y >= res1 && y <= res2 && y >= res3 && y <= res4) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}
