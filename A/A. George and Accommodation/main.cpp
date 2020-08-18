#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    int ans = 0;
    while (n--) {
        int a, b; cin>>a>>b;
        if (b - a >= 2) ans++;
    }

    printf("%d", ans);
    return 0;
}
