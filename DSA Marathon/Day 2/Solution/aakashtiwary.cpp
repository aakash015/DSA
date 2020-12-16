#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       int n;
       cin>>n;

       int arr[n];

       for(int i =0 ;i<n;i++)
        cin>>arr[i];
      
        int key;
         cin>>key;

        int ans=-1;

       for(int i=0;i<n;i++)
       {
         if(arr[i]==key)
          ans=i;
       }  

       cout<<ans<<endl;
    }
}
