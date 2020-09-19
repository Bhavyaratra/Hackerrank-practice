<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,mx=0,p=0;
    cin>>n;
    int A[1000]={0};
    for(int i=0;i<n;i++)
    {   int x;
        cin>>x;
        A[x]++;
        if(mx<x)
        {
            mx=x;
        }

    }
    for(int i=0;i<(mx+1);i++)
    {   
        if(A[i]!=0)
        {
            if(A[i]/2>0)
            {
                p=p+(A[i]/2);
            }
        }
    }
    cout<<p;
=======
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,mx=0,p=0;
    cin>>n;
    int A[1000]={0};
    for(int i=0;i<n;i++)
    {   int x;
        cin>>x;
        A[x]++;
        if(mx<x)
        {
            mx=x;
        }

    }
    for(int i=0;i<(mx+1);i++)
    {   
        if(A[i]!=0)
        {
            if(A[i]/2>0)
            {
                p=p+(A[i]/2);
            }
        }
    }
    cout<<p;
>>>>>>> 1e2a4fd7eb47be9d2cd5f2bcd26fbbb57033845c
}