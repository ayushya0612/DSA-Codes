#include<bits/stdc++.h>
using namespace std;

////SPIRAL PRINT 
int spiralOrder(int arr[][4], int n, int m){
    int row = matrix.size();
    int col = matrix[0].size();    

}
int main(){
     
    // input array
    int arr[3][4];
    cout << " Enter your matrix: "<< endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
         
    }
    cout << endl;

    // print array
    cout << "The Matrix you have entered: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;  

    int ans = spriralOrder(arr, 3, 4);
       
}
    
////PRINT LIKE WAVE
// void wavePrint(int arr[][4], int n, int m){

//     cout << "Wave print of the given matrix: "<< endl;
//     for(int col=0; col<m; col++){
//         if(col%2==0){
//             for (int row = 0; row < n; row++)
//             {
//                 cout << arr[row][col] << " ";
//             }
            
            
//         }
//         else{
//             for (int row = n-1; row >= 0; row--)
//             {
//                 cout << arr[row][col] << " ";
//             }
            
//         }
        
//     }
//     return;
// }
// int main(){
//     int n=3, m=4;
    
//     // input array
//     int arr[3][4];
//     cout << " Enter your matrix: "<< endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
         
//     }
//     cout << endl;

//     // print array

//     cout << "The Matrix you have entered: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;



//     wavePrint(arr, n, m);    
// }



////LARGEST ROW SUM
// int  printLargestRowSum(int arr[][3],int row, int col){
//     int temp = 0;
//     int sum = INT_MIN;
//     int rowIndex = -1; 

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             temp = arr[i][j] + temp;
//         }

//         cout << temp << endl;
//         if (sum < temp)
//         {
//             sum = temp;
//             rowIndex = i;
//         }
          
//         temp = 0;
//     }
//     cout << "Largest row sum is " << sum << endl;
//     return rowIndex;
    
// }
// int  main(){
//     int arr[3][3];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
        
//     }
    
//     int ans = printLargestRowSum(arr,3,3) ;
//     cout << ans << endl;
// }


//// ROW WISE SUM       
// void printRowSum(int arr[][4],int row, int col){
//     int temp = 0;

//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             temp = arr[j][i] + temp;
//         }
        
//         cout << temp << endl;
//         temp = 0;
//     }
    
// }
// int  main(){
//     int arr[3][4];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
        
//     }
    
//     printRowSum(arr,3,4) ;
// }



// //// LINEAR SEARCH
// bool isPresent(int arr[][4], int target, int row, int col){
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return 1;
//             }
            
//         }
        
        
//     }
//     return 0;
    
// }
// int main(){
//     int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

//     //print 
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] <<" ";
//         }
//         cout << endl;
        
//     }

//     int target;
//     cout << "Enter the element that needs to be searched" << endl;
//     cin >> target;

//     if(isPresent(arr, target, 3, 4)){
//         cout << "target found" << endl;
//     }
//     else {
//         cout << "Not found" << endl;
//     }
// }



//// BASIC STRUCTURE 
// int main(){
//     //// INTIALIZING 2D ARRAY   
//     //int arr[3][2];

//     // create array
//     // METHOD 1
//     int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

//     // //METHOD 2
//     // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

//     ////METHOD 3
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 2; j++)
//     //     {
//     //         cin >> arr[i][j];
//     //     }
        
//     // }
    
//     // print 
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] <<" ";
//         }
//         cout << endl;
        
//     }
    

// } 


// void comment 