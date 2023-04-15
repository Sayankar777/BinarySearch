#include <iostream>
using namespace std;
int maxElement(int arr[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int minElement(int arr[], int n)
{
    int min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int even[5] = {4, 5, 6, 7, 8};
    int max = maxElement(even, 5);
    cout << max << endl;
     int min = minElement(even, 6);
    cout << min << endl;
}