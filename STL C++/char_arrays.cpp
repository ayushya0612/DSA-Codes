#include<bits/stdc++.h>
using namespace std;

// // Basic structure of the char arrays with getLength function
// int getLength(char name[])
// {
//     int count = 0;
//     for(int i=0; name[i]!='\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
    
//     cout << "Enter your name " << endl;
//     cin >> name;

//     cout << "Your name is " << name << endl << "The size of your name is ";
//     int size = getLength(name);
//     cout << size << endl; 

    
// }


// // reverse a string
// void reverseString(char name[], int n){
//     int s = 0;
//     int e = n-1;
//     while(s < e)
//     {
    
//         swap(name[s], name[e]);
//         s++;
//         e--;
//     }

//     cout << name << endl;
// }
// int getLength(char name[]){
//     int count = 0;

//     for (int i = 0; name[i] != '\0' ; i++)
//     {
//         count++;
//     }

//     return count;
    
// }
// int main()
// {
//     char name[20];
//     cout << "Enter your name " << endl;
//     cin >> name;

//     cout << "Your name is " << name << endl;
    

//     cout << "The length of your name is " << getLength(name) << endl;

//     reverseString(name, getLength(name));

// }



// Check Palindrome
// bool checkPalindrome(char ch[], int size){
//     int s = 0; 
//     int e = size-1;
//     while (s<e)
//     {
//         if(ch[s] == ch[e]){
//             s++,e--;

//         }
//         else
//         {
//             return 0;
//         }
        
//     }

//     return 1;



// }
// int getLength(char ch[]){
//     int count = 0;

//     for (int i = 0; ch[i] != '\0' ; i++)
//     {
//         count++;
//     }

//     return count;
    
// }
// int main()
// {
//     char ch[10];
//     cout << "Enter your String ";
//     cin >> ch;

//     int size = getLength(ch);

//     cout << "The given string is a palindrome " << checkPalindrome(ch, size);

    
// }