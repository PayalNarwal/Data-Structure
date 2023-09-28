#include <iostream>
using namespace std;

int len(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    } 
    return count;
}

void toLowerCase(char name[]){
    for(int i = 0; name[i] !='\0' ; i++){
        name[i] = i - 'A' +'a';
    } 
}

void toLowerCase(char name[]){
    for(int i = 0; name[i] !='\0' ; i++){
        name[i] = i - 'A' +'a';
    } 
}

bool isPallindrome(char name[]){
    int st = 0;
    int end = len(name) - 1;
    while(st<end){
        if(name[st++] != name[end--]){
            return 0;
        }
    }
    return 1;
}

void reverse(char name[]){
    int st = 0;
    int end = len(name) -1;
    while(st<end){
        // char temp = name[end];
        // name[end] = name[st];
        // name[st] = temp;
        // st++;
        // end--;
        swap(name[st++],name[end--]);
    }
}

int main(){
    char name[20] ;
    cout << "Enter your name : ";
    cin >> name ;
    // '\0' -> Null character
    // name[2] = '\0';     

    cout << "Your name is : " << name << endl ;

    cout << "Length of your name is : "<< len(name) <<endl;


    reverse(name);
    cout << "Reverse of your name is : " << name <<endl;

    cout << "Pallindrome or not : "<< isPallindrome(name) <<endl;

    toLowerCase(name);
    cout << "Your name in lower case is : "<< name <<endl;



}