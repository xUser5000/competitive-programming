#include <iostream>

using namespace std;

int main()
{

    int n; long long x;
    cin>>n>>x;
    int dis = 0;

    for (int i = 0; i < n; i++) {
        long long d;
        string op;
        cin>>op>>d;

        if (op == "+") x += d;
        else {
            if (d > x) dis++;
            else x -= d;
        }

    }

    cout<<x<<" "<<dis;

    return 0;
}
