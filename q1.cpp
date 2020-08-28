#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int Array[size];
    for (int i = 0; i < size; i++)
        cin >> Array[i];
    for (int i = 0; i < size; i++)
        cout << Array[i] << " ";
    return 0;
}