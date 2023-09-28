#include <iostream>
using namespace std;

double pow(double x, int n){
    if(n>=0){
        double ans = 1;
        for(int i = 0; i<n ; i++){
            ans = ans*x;
            // cout << ans <<endl;
        }
        return ans;
    }
    else{
        n = -n;
        int ans = 1;
        for(int i = 0; i<n ; i++){
            ans = ans*x ;
            
        }
         cout << ans <<endl;
        // double one = 1.00;
        // double q =one/ans;
        double r = (1)%ans;

        cout  <<endl;
        return r;
    }
    
}

int main(){
    cout << pow(2,-2) <<endl;

}