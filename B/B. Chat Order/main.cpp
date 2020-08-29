#include <iostream>
#include <set>

using namespace std;

int main()
{

    int n; cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    set<string> s;
    for (int i = n - 1; i >= 0; i--) {
        string element = arr[i];

        if (s.find(element) == s.end()) cout << element << endl;
        s.insert(element);
    }

    return 0;
}
