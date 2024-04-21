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
    for(int &x : a) cin >> x;
    std::sort(a, a + n);
    int min = 1e9 + 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i - 1] < min)
        {
            min =  a[i] - a[i - 1];
        }
    }

    cout << min;

}