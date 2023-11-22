
#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
    int temp = a[n - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void reverse();
int main()
{
    int arr[] = {5, 6, 2, 7, 8};
    reverse(arr, 5);
    return 0;
}
