#include<bits/stdc++.h>
using namespace std;
void printCount(int n){

    //Base Case
    if (n==0)
    {
        return;
    }

    

    // recursive relation
    printCount(n-1);

    cout << n << endl;
   
}
int main(){
    int n;
    cout << endl << "Enter the number ";
    cin >> n;

    printCount(n);

}