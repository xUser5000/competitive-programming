#include <iostream>

using namespace std;

int main()
{

    int x, y;
    cin>>x>>y;

    string arr [6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};

    int n = max(x, y);

    cout<<arr[n - 1];

    return 0;
}
