#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the value of n : ";
    cin >> n ;

    cout << "------- Pattern 1 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n ; j++){
            char ch = 'A' + i -1;
            cout << ch << " ";
        } 
        cout << endl;
    } 

    cout << "------- Pattern 2 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n ; j++){
            char ch = 'A' + n -i;
            cout << ch << " ";
        } 
        cout << endl;
    } 
    

    cout << "------- Pattern 3 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            char ch = 'A' + i -1 ;
            cout <<  ch  << " ";
        } 
        cout << endl;
    }

    cout << "------- Pattern 4 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << "  ";
        }
        for(int k = n-i+1; k>0 ; k--){
            char ch  = 'A' + i -1;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << "------- Pattern 5 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            char ch = 'A' - i + n ;
            cout <<  ch  << " ";
        } 
        cout << endl;
    }

    cout << "------- Pattern 6 -------" << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << "  ";
        }
        for(int k = n-i+1; k>0 ; k--){
            char ch  = 'A' + n -i;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << "------- Pattern 7 -------" << endl;

    char ch = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i ; j++){
            cout <<  ch  << " ";
            ch = ch + 1;
        } 
        cout << endl;
    }

    cout << "------- Pattern 8 -------" << endl;

    for(int i = 1; i <= n; i++){
        char ch = 'A' + i - 1;
        for(int j = 1; j <= i ; j++){
            cout <<  ch  << " ";
            ch = ch + 1;
        } 
        cout << endl;
    }

    cout << "------- Pattern 9 -------" << endl;
 
    for(int i = 1; i <= n; i++){
        char ch = 'A' - i + n;
        for(int j = 1; j <= i ; j++){
            cout <<  ch  << " ";
            ch = ch + 1;
        } 
        cout << endl;
    }


 

    
    return 0; 
}