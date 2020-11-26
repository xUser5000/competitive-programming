#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin >> n;
    string s; cin >> s;
    vector<char> arr;
    for (char ch: s) {
        int a = ch - '0';

        if (a == 0 || a == 1) continue;

        if (a == 2) arr.push_back('2');
        if (a == 3) arr.push_back('3');
        if (a == 4) {
            arr.push_back('2');
            arr.push_back('2');
            arr.push_back('3');
        }

        if (a == 5) arr.push_back('5');
        if (a == 6) {
            arr.push_back('3');
            arr.push_back('5');
        }

        if (a == 7) arr.push_back('7');
        if (a == 8) {
            arr.push_back('7');
            arr.push_back('2');
            arr.push_back('2');
            arr.push_back('2');
        }

        if (a == 9) {
            arr.push_back('7');
            arr.push_back('3');
            arr.push_back('3');
            arr.push_back('2');
        }
    }

    sort(arr.rbegin(), arr.rend());

    for (char ch: arr) cout << ch;

    return 0;
}
