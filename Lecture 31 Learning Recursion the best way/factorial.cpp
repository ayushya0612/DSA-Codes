#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    
    // base case
    if (n == 0)
    {
        return 1;
    }

    return n * factorial((n-1)); 
    
}

int main(){
    int n;
    cout << endl << "Enter the number "<< endl;
    cin >> n;

    int ans = factorial(n);
    cout << ans;

    
    


}
