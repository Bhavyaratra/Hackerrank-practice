#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{ 
    int n,k,count=0;
    cin>>n>>k;
    int a[1000];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int page=1,q_per_page=0;
    int ch=1;
    for (int i = 1; i <= n; i++) 
    {
        for(int j=1;j<=a[i];j++)
        {
            if(j==page)
            {
                count++;
            }
            q_per_page++;
            if(j==a[i] || q_per_page==k )
            {
                page++;
                q_per_page=0;
            }

        }
    }
    cout<<count;
    
}