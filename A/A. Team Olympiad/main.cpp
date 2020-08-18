#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];

    vector<vector<int>> solution;

    while (true) {
        vector<int> current;

        for (int i = 0; i < n; i++){ if (arr[i] == 1) {
            arr[i] = 0;
            current.push_back(i + 1);
            break;
        }}

        for (int i = 0; i < n; i++){ if (arr[i] == 2) {
            arr[i] = 0;
            current.push_back(i + 1);
            break;
        }}

        for (int i = 0; i < n; i++){ if (arr[i] == 3) {
            arr[i] = 0;
            current.push_back(i + 1);
            break;
        }}

        if (current.size() == 3) solution.push_back(current);
        else break;
    }

    cout<<solution.size()<<endl;
    for (int i = 0; i < solution.size(); i++)
        printf("%d %d %d\n", solution[i][0], solution[i][1], solution[i][2]);

    return 0;
}
