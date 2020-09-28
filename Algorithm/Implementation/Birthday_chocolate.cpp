#include <iostream>
#include <vector>

using namespace std;

int main()
{
    signed int n,A[100],d,m,sum=0,count=0;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>d>>m;

    for(int k = 0;k<n;k++)
    {
    for(int i = k ;i<n;i++)
      {
        for(int j=k,s=0;j<=i;j++,s++)
        {
            
            v.push_back(A[j]);
            sum=sum+A[j];
        }  
       
        if(v.size()==m && sum==d)  
        {
            count++;
            sum=0;
            v.clear();
        }
        else
        {
            v.clear();
            sum=0;
        }
      }
    } 
    cout<<count;
}       