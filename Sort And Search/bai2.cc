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

bool cmp(int a, int b)
{
    return abs(a) < abs(b);
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    std::stable_sort(a, a + n, cmp);

    for(int x : a)
        cout << x << " ";
}

