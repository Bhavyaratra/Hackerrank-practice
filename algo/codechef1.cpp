#include<iostream>
#include<vector>

using namespace std;

int main()
{
    signed int n,A[100],sum=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int k = 0;k<n;k++)
    {
    for(int i = k ;i<n;i++)
    {
        for(int j=k;j<=i;j++)
        {
            sum=sum+A[j];
        }    
            if(sum==0)
            {
                count++;
            }
            else
            {
                sum=0;
            }
            
    }
    
    }
    cout<<count;
}