#include <iostream>

using namespace std;

int main()
{
    int r1, r2; cin >> r1 >> r2;
    int c1, c2; cin >> c1 >> c2;
    int d1, d2; cin >> d1 >> d2;


    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int k = 1; k <= 9; k++) {
                for (int t = 1; t <= 9; t++) {

                    if (i == j || i == t || i == k) continue;
                    if (j == k || j == t) continue;
                    if (k == t) continue;

                    if (
                        i + j == r1 &&
                        k + t == r2 &&
                        i + k == c1 &&
                        j + t == c2 &&
                        i + t == d1 &&
                        j + k == d2
                    ) {
                        printf("%d %d\n%d %d", i, j, k, t);
                        return 0;
                    }

                }
            }
        }
    }

    cout << -1;

    return 0;
}
