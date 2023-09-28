#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> v, int k)
{
    int end = v.size() - 1;
    while (k >= 1)
    {
        int temp = v[end];
        for (int i = end; i > 0; i--)
        {
            v[i] = v[i - 1];
        }
        v[0] = temp;
        k--;
    }

    return v;
}

vector<int> rotateArrayM2(vector<int> nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }
    nums = temp;

    return nums;
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter the number of elements : ";
    int n;
    cin >> n;
    cout << "Enter the element in the vector : " << endl;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
    }

    cout << "Enter how many times the array will rotated: ";
    int k;
    cin >> k;

    printVector(v);
    vector<int> v1 = rotateArray(v, k);
    printVector(v1);
    vector<int> v2 = rotateArrayM2(v, k);
    printVector(v2);
}