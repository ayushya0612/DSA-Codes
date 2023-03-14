#include<bits/stdc++.h>
using namespace std;
void fibonnacciIndex(int n){
    int fibNum;

    // Base Case
    if (n == 0)
    {
        return;
    }

    else if (n == 1 || n==2 )
    {
        int a = 0, b = 1;
        fibNum = a+b;    
    }
    
    n--;
    // recursive relation
    fibonnacciIndex(n);
    
}
int main(){
    int n;
    cout << endl << "Enter the number ";
    cin >> n;

    fibonnacciIndex(n);
}