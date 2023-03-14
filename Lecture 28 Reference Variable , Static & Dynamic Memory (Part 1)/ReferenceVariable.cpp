#include<bits/stdc++.h>
using namespace std;

int& func(int a){   //--BAD PRACTISE
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n){
    int* ptr = &n;
    return ptr;
}

void update(int n){
    n++;
}
int main(){

/*
    int i = 5;

    // Create a REFERENCE variable
    int& j = i;

    cout << "Before i increament " << i << endl;
    i++;
    cout << "After i increament " << i << endl;
    j++;
    cout << "After j increament " << i << endl;
    cout << "Print j " << j << endl;
*/

    int n = 5;
    cout << "Before " << n << endl;
    update(n);
    cout << "After " << n << endl;

    return 0;
}