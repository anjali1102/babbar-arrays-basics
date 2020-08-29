#include <iostream>
using namespace std;
void sort(int A[], int size)
{
    int start = 0;
    int end = size - 1;
    int i = 0;
    while (start < end)
    {
        if (A[i] == 0)
        {
            swap(A[i], A[start]);
            i++;
            start++;
        }
        else if (A[i] == 2)
        {
            swap(A[i], A[end]);
            end--;
        }
        else
            i++;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int size;
        cin >> size;
        int A[size];
        for (int i = 0; i < size; i++)
            cin >> A[i];
        sort(A, size);
        for (int i = 0; i < size; i++)
            cout << A[i] << " ";
        cout << endl;
    }
    //code
    return 0;
}