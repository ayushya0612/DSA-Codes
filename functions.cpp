#include<bits/stdc++.h>
using namespace std;



/* program to print square of a number */

// int power(int num1, int num2)
// {
//     int num1 , num2;
//     cin >> num1 >> num2 ;
//     int sq = 1;

//     for (int i = 0; i < num2; i++)
//     {
        
//         sq = sq * num1;    
        
//     }
//     return sq;
    
// }

// int main()
// {
//     int a, b;

//     int answer = power(a,b);

//     cout<<"Answer is :" << answer << endl;
    
//     return 0;
// }


/* program to print a number to be even or odd */

// int EvenOdd(int num)
// {
//     int ans = 0; 
//     if( num % 2 == 0)
//     {
//         ans++;

//     }
   
//     return ans;    

// }


// int main()
// {
//     int a;
//     cin >> a;

    

//     int answer = EvenOdd(a);

//     if (answer == 1)
//     {
//         cout << "the number is EVEN "<< endl;
//     }
//     else
//     {
//         cout << "the number is ODD " << endl;
//     }

//     return 0;
// }


/* program to C(n,r) */


// float combination(int n, int r)
// {
//     int num = 1; 
    
//     for (int i = 1; i <= n; i++)
//     {
//         num = num * i;

//     }

//     int dn1 = 1;

//     for (int i = 1; i <= (n-r); i++)
//     {
//         dn1 = dn1 * i;    
//     }

//     int dn2 = 1;

//     for (int i = 1; i <= r; i++)
//     {
//         dn2 = dn2 * i;    
//     }

//     int ans = num / (dn1 * dn2);

//     return ans;
    
    
// }


// int main()
// {
//     int n, r;
//     cin >> n >> r;

//     int answer = combination(n,r);

//     cout << "the combination is: " << answer << endl;
// }



/* program for counting */

// int printCount(int a)
// {
//     int count = 0;
//     while (count<=a)
//     {
//         cout << count<< endl;
//         count++; 
//     }
    
// }
// int main()
// {
//     int a;
//     cin>>a;
//     int answer = printCount(a);
// }

/* program for prime number */

// int primeNumber(int a)
// {

//     int flag = 0;
//     for (int i = 2; i < a; i++)
//     {
//         if(a%i == 0)
//         {
//             flag = 1;;
//             goto end;
//         }
        
        

//     }
//     end: 
//     return flag;
    
// }
// int main()
// {
//     int a;
//     cin>>a;

//     int answer = primeNumber(a);

//     if(answer == 1)
//     {
//         cout<<"no"<<endl;
//     }
//     else
//     {
//         cout<<"yes"<<endl;
//     }
    
// }

 