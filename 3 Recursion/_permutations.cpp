#include <iostream>
using namespace std;

void printPermutation(string &str, int index,int &count)
{
    // base case
    if (index >= str.length())
    {
        count++;
        cout << str << " ";
        return;
    }

    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        // recursion bhaiya
        printPermutation(str, index + 1,count);
        // backtracking
        swap(str[index], str[j]);
    }
}


int main(){
    string s = "abc";
    int index = 0;
    int count = 0;
    printPermutation(s,index,count);
    cout << endl;
    cout <<"Total permutations: "<< count << endl;
    return 0; 
}