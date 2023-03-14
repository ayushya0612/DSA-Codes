#include<bits\stdc++.h>
using namespace std;


// // First and Last Position of an Element in Sorted Array
// int rightMost(int arr[], int size, int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start + ((end - start)/2);
//     int ans = -1;

//     while (start <= end)
//     {
//         if(key == arr[mid]){
//             ans = mid;
//             start = mid+1;
//         }

//         else if(key > arr[mid]){
//             start = mid+1;
//         }

//         else 
//         {
//             end = mid-1;
//         }
//         mid = start + ((end - start)/2);
        
//     }
//     return ans;
// }
// int leftMost(int arr[], int size, int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start + ((end - start)/2);
//     int ans = -1;

//     while (start <= end)
//     {
//         if(key == arr[mid]){
//             ans = mid;
//             end = mid -1;
//         }

//         else if(key > arr[mid]){
//             start = mid+1;
//         }

//         else
//         {
//             end = mid-1;
//         }
//         mid = start + ((end - start)/2);
        
//     }
//     return ans;
    
// }

// void inputArray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cin  >> arr[i];
//     }
    
// }

// int main (){
//     int t;
//     cin >> t;
//     while(t--){
//         int size, key;
//         cin >> size >> key;

//         int arr[size];
//         inputArray(arr, size);

//         int firstIndex = leftMost(arr, size, key);
//         int lastIndex;

//         if (firstIndex == -1){
//             lastIndex = -1;
//         }
//         else {
//             lastIndex = rightMost(arr, size, key);
            
//         }
//         cout << firstIndex <<" "<< lastIndex<< endl;
//     }
// }



// // find total number of occurence
// int rightMost(int arr[], int size, int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start + ((end - start)/2);
//     int ans = -1;

//     while (start <= end)
//     {
//         if(key == arr[mid]){
//             ans = mid;
//             start = mid+1;
//         }

//         else if(key > arr[mid]){
//             start = mid+1;
//         }

//         else 
//         {
//             end = mid-1;
//         }
//         mid = start + ((end - start)/2);
        
//     }
//     return ans;
// }
// int leftMost(int arr[], int size, int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start + ((end - start)/2);
//     int ans = -1;

//     while (start <= end)
//     {
//         if(key == arr[mid]){
//             ans = mid;
//             end = mid -1;
//         }

//         else if(key > arr[mid]){
//             start = mid+1;
//         }

//         else
//         {
//             end = mid-1;
//         }
//         mid = start + ((end - start)/2);
        
//     }
//     return ans;
    
// }

// void inputArray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cin  >> arr[i];
//     }
    
// }

// int main (){
//     int t;
//     cin >> t;
//     while(t--){
//         int size, key;
//         cin >> size >> key;

//         int arr[size];
//         inputArray(arr, size);

//         int firstIndex = leftMost(arr, size, key);
//         int lastIndex;

//         if (firstIndex == -1){
//             lastIndex = -1;
//         }
//         else {
//             lastIndex = rightMost(arr, size, key);
            
//         }
//         cout << (lastIndex - firstIndex) + 1 << endl;


//     }
// }

// peak index in a mountain 
int findPeak(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid-1]){
            end = mid;
        }
        else
        {
            start = mid +1;
        }
        
        
        
    }
    return -1;
    

}

void inputArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        
    }
    
}

int main(){
    int size;
    cin >> size;

    int arr[size];
    inputArray(arr, size);

    int peak = findPeak(arr, size);
    cout << peak << endl;
}

// starter
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, temp;
        cin >> n;
        
        int arr[2*n];
        
        for(int i=0; i<2*n; i++){
            cin >> arr[i];
        }
        
        for(int i=0; i<2*n; i++){
            temp = 0;
            for(int j=0; j<2*n; j++){
                if(arr[i] == arr[j]){
                    temp++;
                    
                    
                }    
            }
            
            
        }
        if(temp > 2){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }
    }
	// your code goes here
	return 0;
}