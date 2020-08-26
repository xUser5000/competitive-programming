#include <iostream>

using namespace std;

int main()
{

    char arr[10][10];
    for (int i = 0; i < 10; i++) {

        string s; cin >> s;

        for (int j = 0; j < 10; j++) {
            arr[i][j] = s[j];
        }
    }

    // rows
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <= 10 - 5; j++) {

            int x = 0, e = 0;

            for (int k = j; k <= j + 4; k++) {

                char ch = arr[i][k];

                if (ch == 'O') break;

                if (ch == 'X') x++;
                else if (ch == '.') e++;
            }

            if (x == 4 && e == 1) {
                cout << "YES";
                return 0;
            }

        }
    }

    // cols
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i <= 10 - 5; i++) {

            int x = 0, e = 0;

            for (int k = i; k <= i + 4; k++) {

                char ch = arr[k][j];

                if (ch == 'O') break;

                if (ch == 'X') x++;
                else if (ch == '.') e++;
            }

            if (x == 4 && e == 1) {
                cout << "YES";
                return 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            int x = 0, e = 0;

            int k = 0;

            while (i + k < 10 && j + k < 10 && k <= 4) {

                char ch = arr[i + k][j + k];

                if (ch == 'O') break;

                if (ch == 'X') x++;
                else if (ch == '.') e++;

                k++;
            }

            if (x == 4 && e == 1) {
                cout << "YES";
                return 0;
            }

        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {

            int x = 0, e = 0;

            int k = 0;

            while (i + k < 10 && j - k >= 0 && k <= 4) {

                char ch = arr[i + k][j - k];

                if (ch == 'O') break;

                if (ch == 'X') x++;
                else if (ch == '.') e++;

                k++;
            }

            if (x == 4 && e == 1) {
                cout << "YES";
                return 0;
            }

        }
    }

    cout << "NO";

    return 0;
}
