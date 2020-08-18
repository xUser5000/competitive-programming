#include <iostream>

using namespace std;

int main()
{

    string t, ins;
    cin>> t;
    cin>> ins;

    int position = 0;

    for (int i = 0; i < ins.length(); i++) {
        if (ins[i] == t[position]) position++;
    }

    cout<< position + 1;

    return 0;
}
