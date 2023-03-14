#include<bits/stdc++.h>
using namespace std;

//// find unique
// int uniqueElement(int arr[], int size)
// {
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans = arr[i]^ans;
//     }

//     return ans;

// }
// void inputArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
    
// }
// int main ()
// {
//     int arr[1000];
    
//     int size;
//     cin >> size;

//     inputArray(arr, size);

//     int uni = uniqueElement(arr, size);

//     cout << uni << endl;
// }


////Dublicate in array 
// int findDublicate(int arr[], int size)
// {
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans^arr[i];
//     }

//     for (int j = 0; j < size; j++)
//     {
//         ans = ans^j;
//     }
//     return ans;
    
    
// }
// void inputArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
    
// }
// int main ()
// {
    
//     int arr[100];
    
//     int size;
//     cin >> size;

//     inputArray(arr, size);

//     int answer = findDublicate(arr, size);

//     cout << answer << endl;
// }

////Intersection of two sorted array 
// int main()
// {
//     int arr1[100000];
//     int arr2[100000];

//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }

//     for (int j = 0; j < m; j++)
//     {
//         cin >> arr2[j];
//     }

//     int i = 0, j = 0;
//     int ans;
    
//     while(i<n && j<m)
//     {
//         if(arr1[i] == arr2[j])
//         {
//             ans = arr1[i];
//             i++;
//             j++;
//         }
//         else if(arr1[i] < arr2[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }
//     return ans;
// }

////Pair sum (not complete because not known the vector)
// int compareArray(int arr[], int size, int num)
// {
//     vector <vector<int> > ans;

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[i] + arr[j] == num)
//             {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));

//                 ans.push_back(temp);


//             }
            
//         }
        
//     }
//     sort(ans.begin(), ans.end());
//     return ans;

    
    
// }
// int main ()
// {
//     int arr[100000];
    
//     int n, s;
//     cin >> n >> s;



//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
    
//     int answer = compareArray(arr, n, s);

//     cout << answer;
// }


//// 3sum
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[1000];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

        }

        int k;
        cin >> k;

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int m = j+1; m < n; m++)
                {
                    if (arr[i] + arr[j] + arr[m] == k)
                    {
                        cout << arr[i] <<" "<< arr[j] <<" "<< arr[m] << endl;
                    }
                    
                }
                
            }
            
        }
    }
        
        
        
    
    return 0;
    
}

//// sort 0 1 2