#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;


int main()
{
    int n; cin >> n;
    int a[n]; 
    std::map<int, int> M;
    for(int &x : a) 
    {
        cin >> x;
        M[x]++;
    }
    int max = 0;
    for(auto x : M)
    {
        if(x.second > max)
            max = x.second;
    }

    for(auto x : M)
    {
        if(x.second == max)
        {
            cout << x.first << " " << x.second;
            break;
        }
    }

}