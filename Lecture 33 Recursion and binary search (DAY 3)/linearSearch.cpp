#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int key){
    //base case
    if (size == 0)
    {
        return 0;
    }
    if (key == arr[0])
    {
        return 1;
    }

    // recursive relation
    return linearSearch(arr+1, size-1, key);
     
}
int main(){
    int arr[100];

    // input size of the array
    int n;
    cin >> n;

    // input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // input key
    int key;
    cin >> key;

    if(linearSearch(arr, n, key)){
        cout << "FOUND" << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }
    
    
}