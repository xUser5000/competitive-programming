#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++) cin >> arr[i];

    int i = 0;
    while (true) {

        n -= arr[i];

        if (n <= 0) break;

        i = (i + 1) % 7;
    }

    cout << (i % 7) + 1;

    return 0;
}
