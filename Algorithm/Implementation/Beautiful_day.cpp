#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long i,j,k,count=0;
    cin>>i>>j>>k;
    
    for(i;i<=j;i++)
    {   
        long temp=i,n=i,reverse=0,r=0;
        while(n)
        {
            r=n%10;
            reverse=reverse*10+r;
            n=n/10;
        }
         if(abs((i-reverse)%k==0))
            {
                count++;
            }
    }
    cout<<count;
}   