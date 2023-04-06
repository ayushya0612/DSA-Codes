#include<bits/stdc++.h>
using namespace std;
class Hero{

    private:
    int health;
    

    public:
    char level;

    // Constructor 
    Hero(){
        cout << "Constructor formed" << endl;
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
    
    Hero ramesh;  // Constructor calling

    cout << "After" << endl;

}