#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    // input array
    cout << "Enter the array "<< endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j=i-1;

        while (j>=0)
        {
            if (arr[j] > temp)  
            {
                arr[j+1] = arr[j];    // shift
                j--;
            }
            else
            {
                break;
            }
            
        }
        arr[j+1] = temp;
        
    }

    // output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}