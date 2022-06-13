#include <bits/stdc++.h>
using namespace std;

// calculate mean
double mean(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (double)sum / (double)size;
}
// calculate median
double median(int arr[], int size)
{
    sort(arr, arr + size);
    if (size % 2 != 0)
        return (double)arr[size / 2];
    return (double)(arr[(size - 1) / 2] + arr[size / 2]) / 2.0;
}

int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;
    cout << "Enter the array element : ";

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Mean is : " << mean(arr, size) << endl;
    cout << "Median is : " << median(arr, size) << endl;
    return 0;
}