#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    char arr[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    char c = arr[0][0];
    char d = arr[0][1];

    if (c == d) {
        cout << "NO";
        return 0;
    }

    int a = 0, b = n - 1;
    for (int i = 0; i < n; i++) {

        if (arr[i][a] != c || arr[i][b] != c) {
            cout << "NO";
            return 0;
        }

        for (int j = 0; j < n; j++) {
            if (j != b && j != a && arr[i][j] != d) {
                cout << "NO";
                return 0;
            }
        }
        a++; b--;
    }

    cout << "YES";

    return 0;
}
