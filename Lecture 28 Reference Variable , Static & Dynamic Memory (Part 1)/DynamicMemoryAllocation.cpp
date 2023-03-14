#include<bits/stdc++.h>
using namespace std;

int getSum(int* arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}
int main(){
    int n;
    cin >> n;

    //Variable size array
    int* arr = new int[n];

    //Taking input in array
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << ans << endl;
}

/*
int main(){

    
    // char ch = 'q';
    // cout << sizeof(ch) << endl;

    // char* c = &ch;
    // cout << sizeof(c) << endl;
    

//   
//    new char;
//    char* c = new char;
//    cout << (new char) << " " << c << endl;
   

   



    return 0;

}
*/