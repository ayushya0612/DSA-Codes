#include<bits/stdc++.h>
using namespace std;


int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
  
    // If element was found
    if (it != v.end()) 
    {
      
        // calculating the index
        // of K
        int index = it - v.begin();
        // cout << index << endl;
        return index;
    }
    else {
        // If the element is not
        // present in the vector
        // cout << "-1" << endl;
        return -1;
    }
}


int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(5);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] <<" " << endl;
    // }


        // Finding minimum Element
        int minElement = *min_element(v.begin(), v.end());   
        cout << minElement-1 << endl; 
        
        // getting index of minElement
        int index_minElement = getIndex(v,minElement) ;
        
        
        while(minElement < 0)
        {
            v.erase(index_minElement, index_minElement);       
        }
    }
    return 0;
        
}
