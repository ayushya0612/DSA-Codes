#include<iostream>
using namespace std;

int main(){
    
    /* 1. program to print ***
                           ***
                           ***       */
    // int n;
    // cin>>n;

    // int i;
    // i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while(j<=n)
    //     {
    //         cout<<"*";
    //         j=j+1;    
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    


    /* 2. program to print 1 1 1
                           2 2 2
                           3 3 3 */

    // int n ;
    // cin>>n;

    // int i=1;

    // while (i<=n)
    // {
    //     int j=1;
    //     while(j<=n)
    //     {
    //         cout<<i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;

    // }

    /* 3. program for pattern 1 2 3 4
                              1 2 3 4
                              1 2 3 4*/

    // int n;
    // cin>>n;

    // int i=1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=n)
    //     {
    //         cout<<j<<" ";
    //         j=j+1;
    //     }
    //     i=i+1;
    //     cout<<endl;
    // }

    /*4. program for pattern 3 2 1
                             3 2 1 
                             3 2 1 */

    // int n;
    // cin>>n;
    
    // int i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=n)
    //     {
    //         cout<<(n-j+1)<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // Another approach

    // int n;
    // cin>>n;

    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     int value=n;
    //     while(col<=n)
    //     {
    //         // int value=n+row-col;
    //         cout<<value;
    //         col=col+1;
    //         value=value-1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    /* 5.  program for 1 2 3 
                       4 5 6
                       7 8 9 */

    // int n,a=1;
    // cin>>n;

    // int i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=n)
    //     {
    //         cout<<a<<" ";
    //         a=a+1;
    //         j=j+1;
          
    //     }
    //     cout<<endl;
    //     i=i+1;
        
    // }

    /* 6. program for *
                      * *
                      * * *
                      * * * *       */

    // int n;
    // cin>>n;

    // int i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<"*"<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    /* 7.  program for pattern 1
                               2 2
                               3 3 3 
                               4 4 4 4  */

    // int n;
    // cin>>n;

    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=row)
    //     {
    //         cout<<row<<" ";
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    /* 8. program for pattern 1
                              2 3 
                              4 5 6
                              7 8 9 10  */

    // int n;
    // cin>>n;
    // int row=1;
    // int count=1;
    
    // while (row<=n)
    // {
    //     int col=1;
        
    //     while(col<=row)
    //     {
            
            
    //         cout<<count<<" ";
    //         col=col+1;
    //         count=count+1;
            
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }
    
       
    /* 9. program for pattern 1
                              2 3 
                              3 4 5 
                              4 5 6 7  */

    // int n;
    // cin>>n;

    // int row=1;
    // int count=1;
    // while (row<=n)
    // {
    //     cout<<row<<" ";
    //     int col=1;
    //     count=row+1;
    //     while (col<row)
    //     {
            
    //         cout<<count<<" ";
    //         count=count+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }


    // Another way

    // int n;
    // cin>>n;

    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     int value=row;
    //     while (col<=row)
    //     {
    //         cout<<value<<" ";
    //         value=value+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    // Another way 

//     int main()
// {
//     int n;
//     cin>>n;

//     int row=1;
    
    
//     while (row<=n)
//     {
//         int col=1;
        
//         while(col<=row)
//         {
//             int count=row+col-1;
            
//             cout<<count<<" ";
//             col=col+1;
//             count=count+1;
            
//         }
//         cout<<endl;
//         row=row+1;
//     }
    
    

    /* 10. program for pattern 1
                               2 1 
                               3 2 1
                               4 3 2 1 */

    // int n;
    // cin>>n;

    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     int value=row;
    //     while(col<=row)
    //     {
    //         cout<<value<<" ";
    //         value=value-1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    // Another way

    // int n;
    // cin>>n;

    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=row)
    //     {
    //         cout<<row-col+1<<" ";
    //         col=col+1;
    //     }
    //     row=row+1;
    //     cout<<endl;
    // }

    /* 11. program for pattern A A A
                               B B B
                               C C C */

    // int n;
    // cin>>n;

    // int row =1;
    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=n)
    //     {
    //         char ch = 'A'+row-1;
    //         cout<<ch;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
         
    // }

    /* 12. program for pattern A B C
                               A B C
                               A B C  */

    // int n;
    // cin>>n;

    // int row =1;
    
    // while (row<=n)
    // {
    //     int col=1;
    //     char ch='A';
    //     while (col<=n)
    //     {
            
    //         cout<<ch<<" ";
    //         ch= ch+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;

    // }

    // Another way

    // int n;
    // cin>>n;

    // int row =1;
    
    // while (row<=n)
    // {
    //     int col=1;
        
    //     while (col<=n)
    //     {
    //         char ch='A'+col-1;
    //         cout<<ch<<" ";
    //         // ch= ch+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;

    // }

    /* 14. program for pattern A B C
                               D E F
                               G H I   */
    
    // int n;
    // cin>>n;

    // int row =1;
    // char ch='A';
    // while (row<=n)
    // {
    //     int col=1;
        
    //     while (col<=n)
    //     {
            
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
        
    // }

    /* 15. program for pattern A B C
                               B C D
                               C D E  */

    // int n;
    // cin>>n;

    // int row=1;
    
    // while (row<=n)
    // {
    //     char ch= 'A'+row-1;
    //     int col=1;
        
    //     while(col<=n)
    //     {
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    // Anothetr way

    // int n;
    // cin>>n;

    // int  row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=n)
    //     {
    //         char ch='A'+row+col-2;
    //         cout<<ch<<" ";
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    /* 16. program for pattern  A
                                B B
                                C C C */

    // int n;
    // cin>>n;

    // int row =1;
    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=row)
    //     {
    //         char ch='A'+row-1;
    //         cout<< ch<<" ";
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row =row+1;
        
    // }

    /* 17. program for pattern A 
                               B C
                               D E F
                               G H I J  */

    // int n;
    // cin>>n;

    // int row=1;
    // char ch='A';
    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=row)    
    //     {
            
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //         col=col+1;

    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    /* 18. program for pattern A
                               B C
                               C D E
                               D E F G */

    // int n;
    // cin>>n;

    // int row=1;
    
    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=row)    
    //     {
    //         char ch='A'+row +col-2;
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //         col=col+1;

    //     }
    //     cout<<endl;
    //     row=row+1;
    // }


    /* 19. program for pattern D
                               C D
                               B C D 
                               A B C D */

    // int n;
    // cin>>n;

    // int row=1;
    
    // while (row<=n)
    // {
    //     int col=1;
    //     char ch='D'-row-col+2;
        
    //     while (col<=row)    
    //     {
            
            
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //         col=col+1;

    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    /* 20. program for pattern      *
                                   **
                                  ***
                                 ****    */

    // int n;
    // cin>>n;

    // int row=1;

    // while (row<=n)
    // {
    //     int space=n-row;

    //     while(space)
    //     {
    //         cout<<" ";
    //         space=space-1;
    //     } 
    //     int col=1;   
    //     while (col<=row)
    //     {
    //         cout<<"*";
    //         col=col+1;
    //     }
    //     cout<<endl;

    //     row=row+1;
    
        
        
    // }


    /* program for pattern  ***
                            **
                            *      */

    // int n;
    // cin>>n;

    // int row=1;

    // while (row<=n)
    // {
    //     int col=1;

    //     while (col<=n-row)
    //     {
    //         cout<<"*"<<" ";
    //         col=col+1;

    //     }
    //     cout<<endl;
    //     row=row+1;
    // }



    /* program for pattern ****
                            ***
                             **
                              *      */
    // int n;
    // cin>>n;

    // int row=1;

    // while (row<=n)
    // {
    //     cout<<"*"<<;

    // }

    // while (col<=n)
    // {
    //     /* code */
    // }
    

    /* program for dabang pattern 1 2 3 4 5 5 4 3 2 1 
                                  1 2 3 4 * * 4 3 2 1 
                                  1 2 3 * * * * 3 2 1 
                                  1 2 * * * * * * 2 1
                                  1 * * * * * * * * 1   */

    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        while(col<=n-1)
        {
            cout<<col<<" ";
            col=col+1;
        }
        cout<<endl;
        
     
    }
                                  
    
    




 
    
}