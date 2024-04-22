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

void swap(int &a, int &b);
void bubbleSort(int a[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    bubbleSort(a, n);
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
        cnt++;
        cout << "Buoc " << i + 1 << ": ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }
}