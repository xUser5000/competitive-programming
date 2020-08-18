#include <iostream>

using namespace std;

typedef unsigned long long int ll;

int main()
{
    ll n; cin>>n;
    ll sum = 0;
    while (n--) {
        string a; cin>>a;
        if (a == "Tetrahedron") sum += 4;
        else if (a == "Cube") sum += 6;
        else if (a == "Octahedron") sum += 8;
        else if (a == "Dodecahedron") sum += 12;
        else if (a == "Icosahedron") sum += 20;
    }

    cout<<sum;
    return 0;
}
