#include<bits/stdc++.h>
using namespace std;
void walking(int dest, int src){

    cout << "Source " << src << " Destination " << dest << endl;

    // base case
    if (src == dest)
    {
        cout << "pahuch gya";
        return ;
    }

    // processing
    src++;

    // recursive relation
    walking(dest, src);
    
    
}
int main(){
    int dest = 10;
    int src = 1;

    walking(dest,src);

    return 0;
}