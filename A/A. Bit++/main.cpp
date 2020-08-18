#include <iostream>

using namespace std;

int main()
{

    int n; cin>>n;
    int solution = 0;
    for (int i = 0; i < n; i++) {
        string st; cin>>st;
        if (st[0] == '+' || st[1] == '+') solution++;
        else solution--;
    }

    cout<<solution;

    return 0;
}
