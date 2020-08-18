#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, m; cin >> n >> m;
    vector<int> vc;

    for (int i = 2; i <= 50; i++) {

        bool f = false;

        for (int j = 0; j < vc.size(); j++) {

            if (i % vc[j] == 0) f = true;

        }

        if (!f) vc.push_back(i);

    }

    for (int i = 0; i < vc.size(); i++) {

        if (vc[i] == n && vc[i + 1] != m) {
            cout << "NO";
            return 0;
        }

    }

    cout << "YES";

    return 0;
}
