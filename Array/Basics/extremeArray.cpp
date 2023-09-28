#include <iostream>
using namespace std;

void extremeArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left++] << " ";
        }
        else
        {
            cout << arr[left++] << " ";
            cout << arr[right--] << " ";
        }
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    extremeArray(arr, size);

    return 0;
}