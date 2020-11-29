#include <iostream>
#include <map>

using namespace std;

int main()
{

    int k; cin >> k;
    string s; cin >> s;
    map<char,int> mp;
    for (char ch: s) mp[ch]++;

    for (pair<char, int> p: mp) {
        if (p.second % k != 0) {
            cout << -1;
            return 0;
        }
    }

    string a = "";
    for (pair<char,int> p: mp) {
        int c = p.second / k;
        for (int i = 0; i < c; i++) a += p.first;
    }

    for (int i = 0; i < k; i++) {
        cout << a;
    }

    return 0;
}
