#include <iostream>
using namespace std;

void PrimeNumberseries(int a,int b){
    int count = 0;
    for (int i =a; i<=b; i++){
        bool flag = 1;
        if(i<=1){
            i=2;
        }
        for(int j = 2; j<i;j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout<<i<<",";
            count++;
        }
    }
    cout << "\nThe total number of prime number between "<<a<<" and "<<b<<" are : "<<count;
}

int main(){
    int a,b;
    cout<<"Enter lower bound : ";
    cin>>a;
    cout<<"Enter upper bound : ";
    cin>>b;
    PrimeNumberseries(a,b);

}