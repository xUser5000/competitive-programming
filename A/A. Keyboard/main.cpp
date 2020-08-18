#include <iostream>

using namespace std;

int main()
{

    string dir, sent; cin>>dir>>sent;
    string temp = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string solution = "";

    if (dir == "R") {

        for (int i = 0; i < sent.length(); i++)
            for (int j = 0; j < temp.length(); j++)
                if (sent[i] == temp[j]) solution += temp[j - 1];

    } else {
        for (int i = 0; i < sent.length(); i++)
            for (int j = 0; j < temp.length(); j++)
                if (sent[i] == temp[j]) solution += temp[j + 1];
    }

    cout<<solution;

    return 0;
}
