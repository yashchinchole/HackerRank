#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100000];
    int n, i, temp;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}