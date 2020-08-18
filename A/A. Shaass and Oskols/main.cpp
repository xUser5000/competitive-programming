#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int a [n];
    for (int i = 0; i < n; i++) cin>>a[i];
    int m;
    cin>>m;
    vector<pair<int, int>> s;
    for (int i = 0; i < m; i++) {
        int first, second;
        cin>>first>>second;
        s.push_back(pair<int, int>(first, second));
    }

    for (int i = 0; i < m; i++) {
        int bird = s[i].second;
        int wire = s[i].first;

        a[wire - 2] += bird - 1;
        a[wire] += a[wire - 1] - bird;
        a[wire - 1] = 0;
    }

    for (int i = 0; i < n; i++) cout<<a[i]<<endl;

    return 0;
}
