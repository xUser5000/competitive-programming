#include <iostream>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    int b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a; cin >> a;
            b[i][j] = a;
        }
    }

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 2;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int element = b[i][j];
            if (element == 0) {

                for (int k = 0; k < n; k++) {
                    a[k][j] = 0;
                }

                for (int k = 0; k < m; k++) {
                    a[i][k] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i][j] == 1) {
                bool f = false;

                for (int k = 0; k < n; k++) {
                    if (a[k][j] == 1) {
                        f = true;
                    } else if (a[k][j] == 2) {
                        a[k][j] == 1;
                        f = true;
                    }
                }

                if (f) continue;

                for (int k = 0; k < m; k++) {
                    if (a[i][k] == 1) {
                        f = true;
                    } else if (a[i][k] == 2) {
                        a[i][k] == 1;
                        f = true;
                    }
                }

                if (!f) {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int element = a[i][j];
            if (element == 2 || element == 1) cout << 1;
            else cout << 0;
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
