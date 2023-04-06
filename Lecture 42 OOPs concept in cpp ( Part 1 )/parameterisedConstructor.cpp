#include<bits/stdc++.h>
using namespace std;
class Hero{

    private:
    int health;
    
    public:
    char level;

    // Parametrised constructor 1 
    Hero(int health){
        cout << "Constructor 1 formed" << endl;

        this -> health = health;  
        // this keyword used (its a pointer which pointas to the current object)
        
        cout << "this -> " << this << endl;
        /* In this the this value and the address of ramesh is same 
         states that this points to the current object*/
    }

    // Parametrised constructor 2
    Hero(int health, char level){
        cout << "Constructor 2 formed" << endl;

        this -> health = health;  
        this -> level = level;
        
        cout << "this -> " << this << endl;
        
    }

    void print(){
        cout << level << endl;
    }
    
    // Getter and Setter
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

};

int main()
{
    cout << "Before" << endl;
    
    Hero ramesh(10);  // Constructor calling
    cout << "Adress of ramesh " << &ramesh << endl;

    Hero bhatura(21, 'X'); // Constructor calling for 2nd type of constructor

    cout << "After" << endl;

}