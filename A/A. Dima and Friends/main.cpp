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

    int ans = 0;
    for (int i = 1; i <= 5; i++) {
        int a = sum + i;
        if (a % (n+1) != 1) ans++;
    }

    cout << ans;

    return 0;
}
