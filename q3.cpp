#include <bits/stdc++.h>
using namespace std;

int maximum_element(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
        if (max < arr[i])
            max = arr[i];
    return max;
}

int minimum_element(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
        if (min > arr[i])
            min = arr[i];
    return min;
}

//driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cout << maximum_element << " " << minimum_element << endl;
    }
    return 0;
}