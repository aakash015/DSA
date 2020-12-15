#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n+1];
        
        for(int i=0;i<n+1;i++)
          cin>>arr[i];
          
        
        for(int i=0;i<n+1;i++)
        {
          if(arr[abs(arr[i])-1]<0)
          {
            cout<<abs(arr[i])<<endl;
            break;
          }
          else
          arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        }
    }
}
