#include<bits/stdc++.h>
using namespace std;

int findSum(int arr[], int size){
    
    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    // recursive relation 
    return arr[0]+ findSum(arr+1, size-1);     
    
}
int main(){
    int arr[100];

    // size of the array
    int n;
    cin >> n;

    // input of the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    int ans = findSum(arr, n);
    cout << ans << endl;
}