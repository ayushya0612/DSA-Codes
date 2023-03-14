#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size){

    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    // recrsion relation
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        isSorted(arr+1, size-1);
    }
   
}

int main(){
    int arr[100];

    //length of array
    int n;
    cin >> n;

    // input of array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (isSorted(arr, n))
    {
        cout << "given array is sorted" << endl;
    }
    else
    {
        cout << "NOT SORTED" << endl;
    }

    
}