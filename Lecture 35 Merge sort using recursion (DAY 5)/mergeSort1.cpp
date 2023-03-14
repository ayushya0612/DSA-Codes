#include<bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int left, int right){
    

}
int main(){
    int arr[10];

    //input the size of the array
    int n;
    cin >> n;

    // input array
    cout << " Enter the array ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int left = 0;
    int right = n-1;
    mergeSort(arr, left, right);

}