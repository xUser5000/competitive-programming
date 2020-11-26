#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int x, y, z; cin >> x >> y >> z;

    int a = sqrt((x*y) / z);
    int b = sqrt((z*y) / x);
    int c = sqrt((x*z) / y);

    cout << (a+b+c) * 4;

    return 0;
}
