#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using std::cin;
using std::cout;

int sumOfDigit(int n)
{
    int ret = 0;
    while(n)
    {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

bool cmp(int a, int b)
{
    if(sumOfDigit(a) != sumOfDigit(b))
        return sumOfDigit(a) < sumOfDigit(b);
    return a < b;
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;

    std::sort(a, a + n, cmp);

    for(int x : a)
        cout << x << " ";
}