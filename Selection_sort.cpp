#include<bits/stdc++.h>
using namespace std;

int main(){
    int size, min;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            
            
        }
        swap(arr[minIndex], arr[i]);
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}