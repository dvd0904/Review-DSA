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

int firstAppear(int *a, int n, int key);
int lastAppear(int *a, int n, int key);
int firstAppearGreaterOrEqual(int *a, int n, int key);
int firstAppearGreaterThan(int *a, int n, int key);

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a)
        cin >> x;
    int res1 = firstAppear(a, n, x);
    int res2 = lastAppear(a, n, x);
    int res3 = firstAppearGreaterOrEqual(a, n, x);
    int res4 = firstAppearGreaterThan(a, n, x);
    cout << res1 << endl
         << res2 << endl
         << res3 << endl
         << res4 << endl;
    if (res1 == -1)
        cout << 0;
    else
        cout << res2 - res1 + 1;
}

int firstAppear(int *a, int n, int key)
{
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == key)
        {
            res = m;
            r = m - 1;
        }
        else if(a[m] > key)
            r = m - 1;
        else 
            l = m + 1;
    }
    return res;
}

int lastAppear(int *a, int n, int key)
{
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == key)
        {
            res = m;
            l = m + 1;
        }
        else if(a[m] > key)
            r = m - 1;
        else 
            l = m + 1;
    }
    return res;
}
int firstAppearGreaterOrEqual(int *a, int n, int key)
{
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] >= key)
        {
            res = m;
            r = m - 1;
        }
        else 
            l = m + 1;
    }
    return res;
}
int firstAppearGreaterThan(int *a, int n, int key)
{
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] > key)
        {
            res = m;
            r = m - 1;
        }
        else 
            l = m + 1;
    }
    return res;
}