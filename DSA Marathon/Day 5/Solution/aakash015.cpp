#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
     string a;
     cin>>a;
     
     char f;
     cin>>f;
     int count=0;
     for(int i=0;i<a.length();i++)
     {
        if(a[i]==f)
          count++;
     }
     
     cout<<count<<endl;
    }
}
