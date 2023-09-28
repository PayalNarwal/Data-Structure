#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the value of n : ";
    cin >> n ;

    cout << "------- Pattern 1 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            cout << "*" << " ";
        } 
        cout << endl;
    } 

    cout << "------- Pattern 2 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << "  ";
        }
        for(int k = n-i+1; k>0 ; k--){
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "------- Pattern 3 -------" << endl;

    for(int i = 1; i <= n; i++){
        //spaces
        for(int k = n-i; k>0 ; k--){
            cout << "  ";
        }
        //left triangle 
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        //right triangle 
        for(int l = i-1; l > 0; l--){
            cout << l << " ";
        }

        cout << endl;
    }

    cout << "------- Pattern 4 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << j << " ";
        }
        for(int k = 0; k < 2*(i-1); k++){
            cout << "*" << " ";
        }
        for(int l = n-i+1; l>=1; l--){
            cout << l << " ";
        }
        cout << endl;
    } 

    cout << "------- Pattern 5 -------" << endl;

    for(int i = 1; i <= n ; i++){
        if(i==1 || i==n){
            for(int j = 1; j <= n; j++){
                cout << "* ";
            }
        }else{
            cout << "* " ;
            for(int j = 1; j <= n-2; j++){
                cout << "  ";
            }
            cout << "*" ;
        }
        cout << endl;
    }

    
    cout << "------- Pattern 6 -------" << endl;

    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= 2*n; j++){
            if(i==1 || i==n){
                    cout << "* ";
            } 
            else{
                if(j==1 || j==2*n){
                    cout << "* ";
                }else{
                    cout << "  ";
                }
            }        
        }
        cout << endl;
    }


    cout << "------- Pattern 7 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int k = n-i; k>0 ; k--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "------- Pattern 8 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int k = n-i; k>0 ; k--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            if(j==1 || j == i){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "------- Pattern 9 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = i-1; j >0; j--){
            cout << " ";
        }
        for(int k = n-i+1; k>0 ; k--){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "------- Pattern 10 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = i-1; j >0; j--){
            cout << " ";
        }
        for(int k = 1; k <= n-i+1 ; k++){
            if(k==1 || k == n-i+1){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "------- Pattern 11 -------" << endl;
    int m = (n/2);
    for(int i = 1; i <= m; i++){
        for(int k = m-i; k>0 ; k--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            if(j==1 || j == i){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(int i = 1; i <= m; i++){
        for(int j = i-1; j >0; j--){
            cout << " ";
        }
        for(int k = 1; k <= m-i+1 ; k++){
            if(k==1 || k == m-i+1){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "------- Pattern 12 -------" << endl;

    for(int i = 1; i <= m; i++){
        for(int k = m-i; k>=0 ; k--){
            cout << "* ";
        }
        for(int j = 1; j <=2*i-1; j++){
            cout << "  ";
        }
        for(int l = 0; l <=m-i; l++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 1; i <= m; i++){
        for(int k = 1; k<=i ; k++){
            cout << "* ";
        }
        for(int j = 2*(m-i); j >=0; j--){
            cout << "  ";
        }
        for(int l = 1; l <=i; l++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "------- Pattern 13 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (2*i) -1; j++){
            if(j %2 == 0){
                cout << "*";
            }else{
                cout << i;
            }
        }
        cout << endl;
    }

    cout << "------- Pattern 14 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << "* ";
            
        }
        cout << endl;
    }

    cout << "------- Pattern 15 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            if(i ==1){
                cout << "* ";
            }
            else if(j==1 || j == n-i+1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }



    return 0; 
}