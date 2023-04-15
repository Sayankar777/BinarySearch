#include<iostream>
using namespace std;
int main()
{
    int arr[] = {6, 2, 8, 4, 10, 15, 7, 9, 20};
    int n =  sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}