#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        if (i==0 || i==1)
        {
            arr[i]=i;
            cout<<arr[i]<<" ";
        }
        else
        {
            arr[i] = arr[i-1] + arr[i-2];
            cout<<arr[i]<<" ";
        }
        
    }
    
    return 0;
 }