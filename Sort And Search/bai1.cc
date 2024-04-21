#include <iostream>
#include <set>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n; cin >> n;
    int arr[n];
    
    std::set<int> S;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        S.insert(arr[i]);
    }

    cout << S.size();
    

}

