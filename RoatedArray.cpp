#include <iostream>
using namespace std;
int findPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(int arr[], int n, int Target, int s, int e)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == Target)
        {
            return mid;
        }
        if (arr[mid] < Target)
        {
            s = mid + 1;
        }
        else // arr[mid] >  Target
        {
            e = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {7, 9, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivote = findPivot(arr, 5);
    int Target;
    cin >> Target;
    if (arr[pivote] <= Target && Target <= arr[n - 1])
    {
        cout << binarySearch(arr, 5, Target, pivote, n - 1) << endl;
    }
    else
    {
        cout << binarySearch(arr, 5, Target, 0, pivote - 1) << endl;
    }
    return 0;
}