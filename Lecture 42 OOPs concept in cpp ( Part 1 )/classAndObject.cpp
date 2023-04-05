#include<bits/stdc++.h>
using namespace std;

class hero {

    private:
    // Properties
    int health;

    public:
    char level;

    // GETTERS && SETTERS
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealh(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main()
{
    // Object creation
    hero h1;

    // change in health 
    // h1.health = 50;

    // using getter
    cout << "Ramesh ki health: " << h1.getHealth() << endl;

    // using setter
    h1.setHealh(70);

    cout << "Ramesh ki health: " << h1.getHealth() << endl;



    
    cout << "size of h1: " << sizeof(h1) << endl;
    // cout << "Health of h1: " << h1.health << endl;
    

    return 0;
}