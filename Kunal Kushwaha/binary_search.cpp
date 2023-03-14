#include<bits/stdc++.h>
using namespace std;

int ceilingNumber(int arr[], int size, int tar){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;

    for (int i = 0; i < size; i++)
    {
        if (tar == arr[mid])
        {
            return mid;
        }
        else if(tar > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    

}

int main(){
    int size, tar;
    cin >> size >> tar;

    int arr[10];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int value = ceilingNumber(arr, size, tar);

    cout << value << endl;    
    
}

