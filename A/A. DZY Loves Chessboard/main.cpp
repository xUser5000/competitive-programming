#include <iostream>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < m; j++) {
            arr[i][j] = s[j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '-') continue;

            if ((i+j) % 2 == 0) arr[i][j] = 'B';
            else arr[i][j] = 'W';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }


    return 0;
}
