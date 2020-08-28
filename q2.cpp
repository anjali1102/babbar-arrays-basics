#include <bits/stdc++.h>
using namespace std;
int main()
{
    int key, size, input;
    cin >> key;
    cin >> size;
    vector<int> V;
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        V.push_back(input);
    }
    int a = count(V.begin(), V.end(), key);
    if (a > 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}