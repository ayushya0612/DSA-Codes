#include<bits\stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + ((end - start)/2);      

    while (start <= end)
    {
        
        if(arr[mid] == key ){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }

        else
        {
            end = mid-1;
        }

        mid = start + ((end - start)/2);
        
    }
    return -1;
    
}


int main(){
    
    int even[8] = {0 ,0, 1, 1, 2, 2, 2, 2};
    int odd[5] = {3, 8, 1, 14, 16};

    int evenIndex = binarySearch(even, 8, 2);

    cout << "the index of 2 is "<< evenIndex << endl;

}




