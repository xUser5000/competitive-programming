#include <bits/stdc++.h>

using namespace std;

bool div_6 (string x) {
    int second = x[x.size()-1] - '0';
    if (second % 2 != 0) return false;
    int first = x[x.size()-2] - '0';
    if ((first + second) % 3 == 0) return true;
    return false;
}

bool div_9 (string x) {
    int sum = 0;
    for (char ch: x) sum += (ch - '0');
    if (sum % 9 == 0) return true;
    else return false;
}

int main()
{

    string n; cin >> n;

    if (n.size() < 5) {
        int x = stoi(n);

        if (x % 6 == 0 && x % 9 == 0) cout << "6 9";
        else if (x % 6 == 0) cout << "6";
        else if (x % 9 == 0) cout << "9";
        else cout << -1;

        return 0;
    }

    bool a = div_6(n), b = div_9(n);

    if (a && b) cout << "6 9";
    else if (a) cout << "6";
    else if (b) cout << "9";
    else cout << -1;

    return 0;
}
