#include<bits/stdc++.h>
using namespace std;
void reverseString(string& s, int ptr){
    int ptr2 = s.size() - ptr - 1;

    // Base case
    if (ptr > ptr2)
    {
        return;
    }

    swap(s[ptr] , s[ptr2]);
    reverseString(s, ptr+1);    
}
int main(){
    string s;
    cout << "Enter the string ";
    cin >> s;

    reverseString(s, 0);
    cout << s << endl;
} 