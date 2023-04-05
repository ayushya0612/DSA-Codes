#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char str[], int size){
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        if (str[start] == str[end])
        {
            start++, end--;
        }
        else
        {
            return 0;
        }
        
    }
    return 1;
    
}
int getLength(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main(){
    
    char str[20];
    cout << "Enter string " << endl;
    cin >> str;

    int length = getLength(str);

    bool ans = checkPalindrome(str, length);
    
    if (ans)
    {
        cout << "Given string is Palindrome" << endl;
    }
    else
    {
        cout << "NOT PALINDROME" << endl;

    }
    
    
    
    
}