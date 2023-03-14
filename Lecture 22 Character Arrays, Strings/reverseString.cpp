#include<bits/stdc++.h>
using namespace std;

void reverseString(char str[], int size){
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
    
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
    cout << "Enter the string " << endl;
    cin >> str;
    
    int length = getLength(str);
    reverseString(str, length);
    cout << "Reversed string is " << str << endl;
}
