#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key, int start, int end){
    int mid = (start + end)/2;
    
    //base case
    if (start > end)
    {
        return 0;
    }
    else if (arr[mid] == key)
    {
        return mid;
    }

    // recursive relation
    if (key > arr[mid])
    {
        start = mid + 1;
        return binarySearch(arr, size, key, start, end);
    }
    else if (key < arr[mid])
    {
        end = mid - 1; 
        return binarySearch(arr, size, key, start, end);
    }
    
  
}
int main(){
    int arr[100];

    // size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the the array: ";
    // input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // input key
    cout << "Enter the key: ";
    int key;
    cin >> key;
    

    int start = 0;
    int end = n - 1;

    int ans = binarySearch(arr, n, key, start, end);

    if (ans == 0)
    {
        cout << "NOT FOUND" << endl;
    }
    else
    {
        cout << "FOUND and the index of key is " << ans << endl;
    }
    
    
    
}