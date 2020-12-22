#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;

    if (n % 2 == 0) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < n; i++) cout << i << " ";
    cout << "\n";
    for (int i = 0; i < n; i++) cout << i << " ";
    cout << "\n";
    for (int i = 0; i < n; i++) cout << (i+i)% n << " ";

    return 0;
}
