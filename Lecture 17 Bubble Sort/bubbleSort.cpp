#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array ";
    cin >> size;
    
    int arr[size];

    // input array
    cout << "Enter the array ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i=1; i< size; i++){   // for round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < size-i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j+1], arr[j]);
                swapped = true;
            }
        }

        if (swapped == false)   // already sorted
        {
            break;
        }
        
    }
    
    // output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
 
}