#include<bits/stdc++.h>
using namespace std;

class Hero{

    private:
    int health;
    

    public:
    char level;
    
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
    // Static allocation
    Hero a;
    a.setHealth(70);
    a.level = 'B';
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth() << endl;

    // Dynamic allocation
    Hero *b = new Hero;
    b->setHealth(90);
    b->setHealth(90);

    b->level = 'A'; 
    cout << "Level is: " << (*b).level << endl;
    cout << "Health is: " << (*b).getHealth() << endl;

    cout << "Level is: " << b->level << endl;
    cout << "Health is: " << b->getHealth() << endl;
    

}