#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<pair<int,int>> arr;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin>> x >> y;
        pair<int, int> p;
        p.first = x;
        p.second = y;
        arr.push_back(p);
    }

    int solution = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) continue;

            if (arr[i].first == arr[j].second) solution++;
        }
    }

    cout<< solution;

    return 0;
}
