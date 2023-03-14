#include<bits/stdc++.h>
using namespace std;

//// PRIME NUMBER (Sieve of Eratosthene)
// int countPrimes(int n){
//     vector<int> prime(n+1, true);
//     int count = 0;

//     prime[0] = prime[1] = 0;

//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i])
//         {
//             count++;
//             for (int j = 2*i; j < n; j=j+1)
//             {
//                 prime[j] = 0;
//             }   
//         } 
//     }
//     return count;    
// }
// int main(){
//     int n;
//     cin >> n;

//     int ans = countPrimes(n);
// }

//// PRIME NUMBER (Brute force approach)
// bool isPrime(int n){
//     if (n<=1)
//     {
//         return 0;
//     }
    
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i == 0)
//         {
//             return 0;
//         }
        
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin >> n;

//     if(isPrime(n)){
//         cout << "Prime Number" << endl;
//     }
//     else
//     {
//         cout << "Not Prime" << endl;
//     }
   
// }