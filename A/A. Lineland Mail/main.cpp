#include <iostream>
#include <vector>

using namespace std;

int main()
{

    unsigned int n;
    cin>>n;
    long arr [n];
    for (unsigned int i = 0; i < n; i++) cin>> arr[i];

    vector<pair<int,int>> solution;

    int ma = arr[n - 1];
    int mi = arr[0];

    for (int i = 0; i < n; i++) {
        long max_cost = (ma - arr[i] > arr[i] - mi) ? ma - arr[i] : arr[i] - mi;
        long min_cost;
        if (i == 0) min_cost = arr[i + 1] - arr[i];
        else if (i == n - 1) min_cost = arr[i] - arr[i - 1];
        else min_cost = (abs(arr[i] - arr[i + 1]) < abs(arr[i] - arr[i - 1])) ? abs(arr[i] - arr[i + 1]) : abs(arr[i] - arr[i - 1]);

        solution.push_back(pair<int,int>(min_cost, max_cost));
    }

    for (int i = 0; i < n; i++) cout<<solution[i].first<<" "<<solution[i].second<<endl;

    return 0;
}
