#include <iostream>

using namespace std;

int main()
{

    int arr [4][4];
    for (int i = 0; i < 4; i++) {
        string s; cin >> s;
        for (int j = 0; j < 4; j++) {
            char ch = s[j];
            arr[i][j] = ch;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int c = 0;

            if ('#' == arr[i][j]) c++;
            if ('#' == arr[i + 1][j]) c++;
            if ('#' == arr[i][j + 1]) c++;
            if ('#' == arr[i + 1][j + 1]) c++;

            if (c != 2) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}
