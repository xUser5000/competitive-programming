#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        sum += a;
    }

    int sum2 = 0;
    for (int i = 0; i < n-1; i++) {
        int a; cin >> a;
        sum2 += a;
    }

    cout << sum - sum2 << endl;

    int s = 0;
    for (int i = 0; i < n-2; i++) {
        int a; cin >> a;
        s += a;
    }

    cout << sum2 - s;

    return 0;
}
