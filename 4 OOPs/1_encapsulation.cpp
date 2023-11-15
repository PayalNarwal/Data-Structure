#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void printAge(){
        cout << this->age << endl;
    }

    void printWeight(){
        cout << this->weight << endl;
    }
};


int main(){
    Animal a1;
    a1.age = 5;
    a1.weight = 40;
    a1.printAge();
    a1.printWeight();
    
    return 0; 
}