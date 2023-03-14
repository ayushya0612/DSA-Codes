#include<bits/stdc++.h>
using namespace std;
int power(int n, int pow){
    // base case
    if (pow == 0)
    {
        return 1;
    }

    // recursive realtion
    return n * power(n, (pow-1));
}
int main(){
    int n;
    cout << endl << "Enter the number ";
    cin >> n;

    int pow;
    cout << endl << "Enter the pow ";
    cin >> pow;

    int ans = power(n,pow);
    cout << ans;
}