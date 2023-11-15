#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int st = 0;
    int end = size - 1;
    while (st < end)
    {
        // swap(arr[st],arr[end]);
        int temp = arr[end];
        arr[end] = arr[st];
        arr[st] = temp;
        st++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);
}