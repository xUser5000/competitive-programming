#include <iostream>

using namespace std;

int main()
{

    int n; cin >> n;
    double cnt = 0;
    for (int i = 0; i < n; i++) {
        double a; cin >> a;
        cnt += a/100;
    }

    printf("%.6f", (cnt/n)*100 );

    return 0;
}
