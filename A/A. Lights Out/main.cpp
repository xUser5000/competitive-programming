#include <iostream>

using namespace std;

int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};

bool valid (int i, int j) {
    return i < 3 && i >= 0 && j < 3 && j >= 0;
}

int main()
{

    bool arr [3][3] = {true};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            arr[i][j] = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            int c; cin >> c;
            if (c % 2 == 0) continue;

            arr[i][j] = !arr[i][j];

            for (int k = 0; k < 4; k++) {
                int a = di[k] + i;
                int b = dj[k] + j;

                if (valid(a, b)) arr[a][b] = !arr[a][b];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
