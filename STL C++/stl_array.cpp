#include<bits/stdc++.h>
#include<vector>
#include<array>
using namespace std;

int main()
{
   // declaring the array int the regular way 
   int basic[4] = {1,2,3};

   // declaration of the array named arr
   array<int,4> arr;
    
   // finding the size of the array arr 
   int size = arr.size();
    
   // printing the array
   for(int i=0; i<size; i++)
   {
      cout << arr[i] << endl;
   }
    
   // accessing the array with the index
   cout <<"Element at 2nd index: "<< arr.at(2) << endl;
    
   // checking if the array is empty or not
   cout <<"Empty or not: "<< arr.empty() << endl;
    
   // first element of the array 
   cout <<"First Element: "<< arr.front() << endl;
    
   // last Element of the array
   cout << "Last Element of the array: "<< a.back() << endl;
   


   
    
}
