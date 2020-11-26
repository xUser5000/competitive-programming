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
    for (pair<int,int> p: arr) {
        int x0 = p.first;
        int y0 = p.second;

        bool left = false, right = false, high = false, low = false;
        for (pair<int,int> element: arr) {
            int x1 = element.first;
            int y1 = element.second;

            if (x1 > x0 && y1 == y0) right = true;
            if (x1 < x0 && y1 == y0) left = true;
            if (x1 == x0 && y1 < y0) low = true;
            if (x1 == x0 && y1 > y0) high = true;
        }


        if (left && right && low && high) ans++;
    }

    cout << ans;

    return 0;
}
