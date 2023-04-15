#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
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
int main()
{
    // int arr[5] = {1, 2, 3, 7, 9};
    int arr[5] = {7, 9, 1, 2, 3};
    int pivot = getPivot(arr, 5);
    cout << pivot << endl;
    cout << "Every thing is fine" << endl;
    return 0;
}