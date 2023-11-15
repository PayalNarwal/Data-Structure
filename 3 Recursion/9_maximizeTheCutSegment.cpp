#include <iostream>
#include <vector>
using namespace std;

int maximizeTheCuts(int n , int x, int y, int z){
    if(n <= 0){
        return 0;
    }
    
    int option1 = 1 + maximizeTheCuts(n-x,x,y,z);
    int option2 = 1 + maximizeTheCuts(n-y,x,y,z);
    int option3 = 1 + maximizeTheCuts(n-z,x,y,z);

    return max(option1, max(option2,option3));
}

       

int main(){
    int n = 4;
    int x = 2;
    int y = 1;
    int z = 1;
    cout << maximizeTheCuts(n,x,y,z) << endl;
    return 0; 
}