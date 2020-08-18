#include <iostream>

using namespace std;

int main()
{

    int cal [4];
    for (int i = 0; i < 4; i++) {
        cin>> cal[i];
    }

    string process;
    cin>> process;

    int solution = 0;
    for (int i = 0; i < process.length(); i++) {
        if (process.at(i) == '1') solution += cal[0];
        else if (process.at(i) == '2') solution += cal[1];
        else if (process.at(i) == '3') solution += cal[2];
        else solution += cal[3];
    }

    cout<< solution;

    return 0;
}
