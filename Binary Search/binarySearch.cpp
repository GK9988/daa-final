#include <bits/stdc++.h>
using namespace std;

void arrPrinter(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int *arr, int n, int x)
{
    int low = 0;
    int high = n;
    int mid;

    while (low <= high)
    {
        mid = (high + low) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
    }

    return -1;
}

void sort(int *arr, int n)
{

    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    cout << endl;

    int *arr = new int[n];

    cout << "Enter Values for Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array: ";
    arrPrinter(arr, n);

    sort(arr, n);
    cout << "Array after Sorting: ";
    arrPrinter(arr, n);

    int x;

    cout << "Which Element you want to find: ";
    cin >> x;
    cout << endl;

    int index = binarySearch(arr, n, x);

    if (index != -1)
        cout << "Element Found at: " << index + 1;
    else
        cout << "Element not Found";
}