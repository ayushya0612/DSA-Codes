#include<bits/stdc++.h>
using namespace std;
class Hero{

    private:
    int health;
    
    public:
    char level;

    // Simple Constructor
    Hero(){
        cout << "Simple Constuctor called" << endl;
    }

    // Copy Constructor
    Hero(Hero& temp){
        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // Parametrised constructor 1 
    Hero(int health){
        this -> health = health;  
        // this keyword used (its a pointer which pointas to the current object)
        
    } 

    // Parametrised constructor 2
    Hero(int health, char level){
        
        this -> health = health;  
        this -> level = level;
                
    }

    void print(){
        cout << "level " << this->level << endl;
        cout << "health " << this->health << endl;
    }
    
};

int main()
{
    cout << "Before" << endl;
    
    Hero S(70, 'C');  // Constructor calling
    S.print();

    Hero R(S);        // Copy Constructor Calling
    R.print();

    cout << "After" << endl;

}