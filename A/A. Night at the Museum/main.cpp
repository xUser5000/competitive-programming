#include <iostream>

using namespace std;

int main()
{

    string str;
    cin>>str;
    str = "a" + str;

    string letters = "abcdefghijklmnopqrstuvwxyz";

    int solution = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        int current = letters.find(str[i]);
        int next = letters.find(str[i + 1]);
        int diff = abs(next - current);

        if (diff >= 13) solution += 26 - diff;
        else solution += diff;
    }

    cout<< solution;

    return 0;
}
