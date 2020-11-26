#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];

    int high = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % a[i] == 0) {
                int c = b[j] / a[i];
                if (c == high) cnt++;
                if (c > high) {
                    high = c;
                    cnt = 1;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
