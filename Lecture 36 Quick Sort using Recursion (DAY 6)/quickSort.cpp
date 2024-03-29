#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int count = 0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }      
    }

    // place pivot at the right place
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right vala part sambhal lete hai
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
        
        return pivotIndex;
    }
    
    
}
void quickSort(int arr[], int s, int e){
    // Base case
    if(s>=e){
        return;
    }

    // Partition
    int p = partition(arr, s, e);

    // left wala part sort karo
    quickSort(arr, s, p-1);

    // right wala part sort karo
    quickSort(arr, p+1, e);

}
int main(){
    int arr[10];

    // array size
    int n;
    cin >> n;

    //input array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}