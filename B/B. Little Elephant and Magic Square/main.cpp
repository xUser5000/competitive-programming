#include <bits/stdc++.h>

using namespace std;

int arr[3][3];

bool is_magic () {
    set<int> s;
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) sum += arr[i][j];
        s.insert(sum);
    }

    for (int j = 0; j < 3; j++) {
        int sum = 0;
        for (int i = 0; i < 3; i++) sum += arr[i][j];
        s.insert(sum);
    }

    s.insert(arr[0][0] + arr[1][1] + arr[2][2]);
    s.insert(arr[0][2] + arr[1][1] + arr[2][0]);

    if ((int) s.size() == 1) return true;
    return false;
}

void print () {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= 1e5; i++) {
        arr[0][0] = i;
        arr[1][1] = i + arr[2][0] - arr[1][2];
        arr[2][2] = i + arr[1][0] - arr[2][1];
        if (is_magic()) {
            print();
            return 0;
        }
        arr[0][0] = 0;
        arr[1][1] = 0;
        arr[2][2] = 0;
    }

    return 0;
}
