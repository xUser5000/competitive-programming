#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n; cin >> n;
    string s; cin >> s;

    vector<int> ans;
    ans.push_back(0);

    for (int i = 0; i < n; i++) {

        if (s[i] == '1') ans[ans.size() - 1]++;
        else ans.push_back(0);

    }

    for (int i = 0; i < ans.size(); i++) cout << ans[i];

    return 0;
}
