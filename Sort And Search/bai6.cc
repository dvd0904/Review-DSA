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
int n; 

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selSort(int *arr)
{
    int i, j, min_index;
    for(i = 0; i < n - 1; i++)
    {
        min_index = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index != i)
            swap(arr + i, arr + min_index);
        cout << "Buoc " << i + 1 << ": ";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

    }

   
}

int main()
{
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    selSort(a);
}