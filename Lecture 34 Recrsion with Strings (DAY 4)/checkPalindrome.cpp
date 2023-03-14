#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str, int left, int right){
    //Base case
    if(left > right){
        return 1;
    }
    else if(str.size() == 1){
        return 1;

    }
    if (str[left] != str[right])
    {
        return 0;
    }
    else
    {
        checkPalindrome(str, left+1, right-1);   // recursive relation
    }
    
    

} 
int main(){
    string str;
    cout << "Enter the string ";
    cin >> str;

    int left = 0;
    int right = str.size()-1;

    if(checkPalindrome(str, left, right)){
        cout << "given string is palindrome " << endl;

    }
    else{
        cout << "NOT PALINDROME ";
    }
}