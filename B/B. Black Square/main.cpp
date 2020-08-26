#include <iostream>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    char arr[n][m];

    int c = 0;

    int minX = 105, maxX = 0;
    int minY = 105, maxY = 0;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < m; j++) {
            char ch = s[j];

            arr[i][j] = ch;

            if (ch == 'B') {
                c++;

                minX = min(minX, j);
                maxX = max(maxX, j);

                minY = min(minY, i);
                maxY = max(maxY, i);
            }
        }
    }

    if (c == 0) cout << 1;
    else if (c == 1) cout << 0;
    else {

        int len = max(maxY - minY + 1, maxX - minX + 1);

        // printf("%d %d %d %d\n", minX, maxX, minY, maxY);

        if (len > n || len > m) cout << -1;
        else {

            int cnt = 0;

            for (int i = minY; i <= maxY; i++) {
                for (int j = minX; j <= maxX; j++) {

                    char ch = arr[i][j];

                    if (ch == 'B') cnt++;

                }
            }

            cout << len * len - cnt;

        }

    }

    return 0;
}
