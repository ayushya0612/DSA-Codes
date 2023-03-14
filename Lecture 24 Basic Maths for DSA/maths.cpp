#include<bits/stdc++.h>
using namespace std;

//// HCF/GCD
// int gcd(int a, int b){
//     if (a==0){
//         return b;
//     }

//     if (b==0){   
//         return a;
//     }

//     while (a!=b){
//         if(a>b){
//             a = a-b;
//         }
//         else{
//             b = b-a;
//         }
//     }
//     return a;   
// }

// int main(){
//     int a, b;
//     cout << "Enter the numbers: " << endl;
//     cin >> a >> b;

//     int ans = gcd(a,b);
//     cout << ans << endl;
// }

//// PRIME NUMBER(Brute force approach)
bool isPrime(int n){
    if (n<=1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        for (int j = 2*i; j < n; j=j+1)
        {
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    
    
}
int main(){
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "PRIME NUMBER" << endl;
    }
    else
    {
        cout << "NOT PRIME" << endl;
    }


    
    
}


