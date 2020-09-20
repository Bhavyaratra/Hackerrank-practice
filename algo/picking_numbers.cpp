#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<math.h>

using namespace std;

int main()
{   vector<pair<int,int>> v(100);
    int n,a[1000]={0},max=0;
    cin>>n;
    int x,mx=0;
    for(int i=0 ; i<n;i++)
    {   
        cin>>x;
        a[x]++;
        if(mx<x)
        {
            mx=x;
        }
    }
    for(int i=1;i<mx;i++)
    {
        if(a[i]+a[i+1]>max) 
        {   
            max=a[i]+a[i+1];
        }
        
    }
    cout<<max;

    
    
    
}