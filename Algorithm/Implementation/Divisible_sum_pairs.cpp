#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int A[100],n,k,sum=0,count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<(n-1);i++)
    {
        for(int j=(i+1);j<n;j++)
        {   sum=A[i]+A[j];
            if(sum%k==0)
            {
                count++;
                sum=0;
            }

        }
    }
    cout<<count;
}