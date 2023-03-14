#include<bits/stdc++.h>
using namespace std;

class hero {

    // Properties
    public:
    int health;
};

int main()
{
    // Object creation
    hero h1;
    h1.health = 50;

    cout << "size of h1: " << sizeof(h1) << endl;
    cout << "Health of h1: " << h1.health << endl;
    

    return 0;
}