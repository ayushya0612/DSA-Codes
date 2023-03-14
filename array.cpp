#include<bits/stdc++.h>
using namespace std;

// introduction array and using it in function 

// void printArray(int array[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << "value of " << i << "indexing is" << array[i] <<endl; 
//     }

//     cout << "print DONE"<<endl;
    
// }


// int main()
// {
//     int n;
//     cin >> n;

//     int ayush[n];  

//     for ( int j = 0; j < n; j++)
//     {
        
//         cin >> ayush[j] ;
//     }

//     printArray(ayush , 10);  
// }

// playing with array with different data types 

// void printArray(char arr[], int size)
// {   
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
   


    
// }

// int main()
// {
//     char a[5];

//     printArray(a , 5);



// print hte sum of the n numbers in an array


// void addArray(int add[], int n)
// {
//     int sum=0; 

//     for (int j = 0; j < n; j++)
//     {
//         sum=add[j]+sum;
//     }
//     cout << sum << endl;
// }


// int main()
// {
//     int arr[1000];

//     int size;
//     cin >> size;

//     for (int i=0; i<size; i++)
//     {
//         cin >> arr[i];

//     }
    
//     addArray(arr , size);

// }



// program for linear search in the array  

// int linearSearch(int arr[], int size, int key)
// {
//     int flag = 0; 

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             cout << "Found and the indexing of the key is : " << i << endl;
//             flag = 1;
            
//         }
        
        
//     }
//     if (flag == 0)
//     {
//         cout << "NOT Found " << endl;  
//     }
    
    
    
// }

// int main ()
// {
//     int arr[10] = {200, 222, 74, 59, 64, 23, 39, 25, 1, 0 };

//     cout << "Enter the key(the number that you want to search) :" <<endl;

//     int key;
//     cin >> key; 

    // //bool found = linearSearch(arr, 10, key);

    // linearSearch(arr, 10, key);


    // // if (found)
    // //{
    // //    cout << "YES" << endl;

    // //}
    // //else
    // //{
    // //    cout << "NO" <<endl;
    // }
// }


// reverse an array

// void reverseArray(int arr[], int size)
// {
//     int revArr[size];

//     for (int i = 0; i < size; i++)
//     {
//         revArr[i] = arr[size-i];

//     }
    
//     for (int j = 0; j < size; j++)
//     {
//         cout << revArr[j] <<endl;
//     }
    

// }

// int main()

// {
//     int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//     reverseArray(arr, 10);

// }

// Another method in reversing an array

// void reverseArray(int arr[], int size)
// {
//     int store, index = size-1;

//     if(size%2 == 0)
//     {   for (int i = 0; i < size/2; i++)
//         {
//             store = arr[i];
//             arr[i] = arr[index-i];
//             arr[index-i] = store;
//         }
//     }
//     else
//     {
//         for (int i = 0; i < (size+1)/2; i++)
//         {
//             store = arr[i];
//             arr[i] = arr[index-i];
//             arr[index-i] = store;
//         }
//     }

//     for (int j = 0; j < size; j++)
//     {
//         cout << arr[j] << endl;
//     }
//     // cout << size <<endl;
    
// }

// int main()
// {
//     int arr[5] = {1, 5, 8, 7, 10};
    
//     reverseArray(arr, 5);

// }

// most optimised reversing of an array
// void reverseArray(int array[], int size)
// {
//     int start = 0;
//     int end = size-1;

//     while (start<=end)
//     {
//         swap(array[start], array[end]);
//         start++;
//         end--;
//     }
        
// }

// void printArray(int array[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] <<" ";
//     }
//     cout<<endl;
    
// }

// int main()
// {
//     int arr[5] = {1, 5, 8, 7, 10};
//     int brr[4] = {5, 8, 9, 45};
    
//     reverseArray(arr, 5);
//     reverseArray(brr, 4);

//     printArray(arr, 5);
//     printArray(brr, 4);
// }


// program new

// // printing the array
// void printArray(int array[], int size)
// {
//     for (int j = 0; j < size; j++)
//     {
//         cout << array[j] << " ";
//     }
//     cout << endl;
    
// } 

// // reversing the array
// void reverseArray(int array[], int size)
// {
//     int start = 0;
//     int end = size-1;

//     while (start<=end)
//     {
//         swap(array[start], array[end]);
//         start++;
//         end--;
//     }
    
// }

// // taking input in array
// void inputArray(int array[], int size)
// {
//     for(int i=0; i<size; i++)
//     {
//         cin >> array[i];
//     }
// }

// int main()
// {
//     int arr[100];
//     int brr[100];
    
//     int size;
//     cin >> size;
    
//     inputArray(arr, size);
//     inputArray(arr, size);

//     reverseArray(arr, size);
//     reverseArray(arr, size);

//     printArray(arr, size);
 
// }

// swap alternate indexes in an array
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] <<" " ;
//     }
    
// }

// void swapAlternate(int arr[], int size)
// {
//     for (int i = 0; i < size; i+=2)
//     {
//         if (i+1 < size)
//         {
//             swap(arr[i], arr[i+1]);
//         }
        
//     }
    
// }

// void inputArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
    
// }

// int main ()
// {
//     int arr[10];

//     int size;
//     cin >> size;

//     inputArray(arr, size);
//     swapAlternate(arr, size);    
//     printArray(arr, size);

//     cout << endl;
    
//     cin >> size;
//     inputArray(arr, size);
//     swapAlternate(arr, size);    
//     printArray(arr, size);



//     return 0;
// }

////sort 0 1(not complete)
int main ()
{
    int arr[100];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int i=0;
    int j=n-1;

    while (i<=j)
    {
        if(arr[i] == 0)
        {
            i++;
            j--;   
        }
        else if (arr[j] == 0)
        {
            
        }
        
        else 
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] <<" ";
    }
    
    
    
}

