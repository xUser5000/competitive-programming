#include <iostream>
#include <math.h>

using namespace std;

const double PI = 3.14159265358979;

int main()
{

    int t; cin >> t;
    cout.precision(11);
    while (t--) {
        int a, h; cin >> a >> h;
        double theta= (double) a / 180 * PI;
        double x = (double) h / ( 2 * sin( theta / 2 ) );
        double area = 0.5 * x * x * sin(theta);
        cout << area << endl;
    }

    return 0;
}
