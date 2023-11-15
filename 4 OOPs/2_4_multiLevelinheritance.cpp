#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;
    string name;

    void printAge(){
        cout << this->age << endl;
    }

    void printWeight(){
        cout << this->weight << endl;
    }
};

class Dog:public Animal{    
    public:
    string type;
    void getAge(){
        cout << this->age << endl;
    }
};

class Pomeranian:public Dog{
    public:
    void getDetails(){
        cout << this->name << endl;
        cout << this->type << endl;
    }

};



int main(){
    Pomeranian d1;
    d1.age = 5;
    d1.weight = 40;
    d1.printAge();
    d1.printWeight();
    d1.getAge();
    d1.name= "Doggy";
    d1.type = "Pomeranian";
    d1.getDetails();

    return 0; 
}