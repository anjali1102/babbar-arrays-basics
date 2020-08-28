#include <bits/stdc++.h>
using namespace std;

int rotate_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//driver code
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    rotate_array(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}