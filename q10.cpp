#include <bits/stdc++.h>
using namespace std;
int maximumElement(int arr[], int n)
{
    //Your code here
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int minimumElement(int arr[], int n)
{
    //Your code here
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int maximumElement(arr, n);
    int minimumElement(arr, n);
    cout << (max - min);
    return 0;
}