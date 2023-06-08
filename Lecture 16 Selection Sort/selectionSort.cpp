#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size " ;
    cin >> n ; 
    
    int arr[n];
    

    cout << "Enter the array: " << endl;

    // Taking input in array
    for(int i=0; i<n; i++){
        
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)    // loop bs n-1 tak chalega kyuki last number sorted hi hoga
    {
        int smallIndex = i;
       
        for (int j = i+1; j < n; j++)    // loop i+1 se chalega kyuki i consider hua hai pichle loop pe 
        {
            if (arr[j] < arr[smallIndex])
            {

                smallIndex = j;
            }            
        }
        swap( arr[smallIndex], arr[i]);
        
    }

    // Printing the array       
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    
}