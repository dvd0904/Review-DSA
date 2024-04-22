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

int binarySearch(int *arr, int n, int x);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (binarySearch(a, n, x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int binarySearch(int *arr, int n, int x)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m =  (l + r)/2;
        if(arr[m]  == x)
            return 1;
        else if (arr[m] > x)
            l = m + 1;
        else 
            r = m - 1;
    }
    return 0;
}