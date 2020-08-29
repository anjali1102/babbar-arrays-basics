#include <iostream>
using namespace std;
void move_negatives(int arr, int size)
{
    int start = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] < 0)
            if (i != start)
            {
                swap(arr[i], arr[start]);
                start++;
            }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    move_negatives(arr, size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    return 0;
}