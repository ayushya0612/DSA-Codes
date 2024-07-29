#include<bits/stdc++.h>
using namespace std;

int main()
{
    // creationg of stack in STL
    stack<int> s;

    // push operation
    s.push(2);
    s.push(4);
    s.push(6);

    // pop operation
    s.pop();

    // top operation
    cout << s.top() << endl;

    // check stack empty
    if(s.empty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "NOT empty" << endl;
    }

    // check size of stack
    cout << s.size() << endl;



}